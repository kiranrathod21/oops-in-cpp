

#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;







 // 1) non-parametrized constructor or Default has_trivial_copy_constructor


 class Person{
      
      private: 
           string name;
           int age;
           float height;


      public:
           Person(){
               name="Null";
               age=0;
               height=0.0f;
           }     


           void getData(){
               cout<<"Name : "<<name<<endl;
                cout<<"Age : "<<age<<endl;
                cout<<"height : "<<height<<endl;

           }

 };


 int main(){

     Person  obj;
     obj.getData();
     return 0;
 }



