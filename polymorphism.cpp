#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;





//Polymorphism

// 1)Base class Pointer And Derived Class Object?

// We can Only Access features of Base class

// 2)virtual Function

// Virtual means existing appearace but not in reality
// Virtual Function means functon exsting in class but can't be used

//Program that appears to be calling a function of one class may in reality be calling a function 
// of different class.





class base{
    public:
    virtual  void show(){
          cout<<"Base class"<<endl;
      }
};

class derived1:public base{
    public:
      void show(){
          cout<<"Derived class 1"<<endl;
      }
};

class derived2:public base{
    void show(){
        cout<<"Derived class 2"<<endl;
    }
}; 

int main(){
    base *ptr;
    ptr=new derived1();
    ptr->show();

    ptr=new derived2();

    ptr->show();
    return 0;
}



