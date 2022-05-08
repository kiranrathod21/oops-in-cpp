#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;


//Virtual Destructor





class base{
    public:
    virtual  ~base(){
        cout<<"Base class destructor"<<endl;
      }
};

class derived :public base{
    public:
       ~derived(){
       cout<<"Derived class destructor"<<endl;
       }
};



int main(){

base *ptr=new derived;  // pointer of base class & object of derived class

delete ptr;



    return 0;
}


