#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;






// 3) copy Constructors


 class Person{
      
      private: 
           string name;
           int age;
           float height;


      public:


        public:
           Person(){
               name="Null";
               age=0;
               height=0.0f;
           }     


           Person(string name_a, int age_a, float height_a){
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



