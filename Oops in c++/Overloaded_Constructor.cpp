#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;






// Overloaded Constructor




 class Person{
      
      private: 
           string name;
           int age;
           float height;


      public:


    
             


           Person(string name_a="Null", int age_a=0, float height_a=0.0f){
               name=name_a;
               age=age_a;
               height=height_a;
           }  


           Person(Person &obj2){
                name=obj2.name;
               age=obj2.age;
               height=obj2.height;
           }   


           void getData(){
               cout<<"Name : "<<name<<endl;
                cout<<"Age : "<<age<<endl;
                cout<<"height : "<<height<<endl;

           }

 };


 int main(){

     Person  obj, obj2("Kiran", 22, 185), obj3(obj2);
     obj.getData();
     obj2.getData();
     obj3.getData();
     return 0;
 }

