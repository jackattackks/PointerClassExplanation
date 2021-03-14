# PointerClassExplanation
Program 4 - Input a class as an argument for a function...   

* Write and run the following code.

  **  Explain correctly and fully how fun1 and fun1 pointer arguments works.. // use comments on each line..

// Example program
#include <iostream>
using namespace std;
#include <string>

class myClass {
    private:
       int x;
    public:
       myClass( ) { x = 0; }
       myClass( int inX ) { x = inX; }
       int getX( ) { return x; }
       void setX( int inX ) { x = inX; }
};

void fun1( myClass & inC1)
{
    inC1.setX(42);
 }  

void fun2( myClass * inC2)
{
    inC2->setX(66);
 }

int main()
{
  std::string name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Hello friend,  " << name << "!\n";
  
  myClass mainC1;
  cout << mainC1.getX() << endl;
  fun1( mainC1 );
  cout << mainC1.getX() << endl;
  fun2 ( &mainC1 );
  cout << mainC1.getX() << endl;
  
}
