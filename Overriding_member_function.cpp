#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;




// Overriding Member Function

// Note:- Redefining functionality of BASE class into DERIVED class ,then if we 
//        create  OBJECT of DERIVED class


// Note:- Derived class object would call , function in derived class ,
//      if same function exists in both classes



class base{
public:
  void Msg(){
      cout<<"It is a base class"<<endl;
  }


};

class derived: public base{
public:
     void Msg(){
      cout<<"It is a derived class"<<endl;

      base::Msg();
  }


};


int main(){

    derived d;
    d.Msg();
    return 0;
}





// Relations of Inheritance

// 1) IsA relationship
// 2) hasA relationship


