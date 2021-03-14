//
//  main.cpp
//  Week8Prog4
//
//  Created by Jackie on 3/10/21.
//

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

void fun1( myClass & inC1) //address of parameter being sent through this function
{inC1.setX(42);} //at that address previously mentioned the value 42 will be set

void fun2( myClass * inC2) //point is decclared
{inC2->setX(66);} //at the pointer address the value 66 will be set

int main()
{
  std::string name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Hello friend,  " << name << "!\n";
  
  myClass mainC1;
  cout << mainC1.getX() << endl; // prints 0 because x is equal to 0
  fun1( mainC1 ); //uses address of C1 as parameter and sets x equal to 42 at that address
  cout << mainC1.getX() << endl; //prints 42
  fun2 ( &mainC1 ); //uses address of mainC1 as parameter
  cout << mainC1.getX() << endl;//prints 66
  
}

