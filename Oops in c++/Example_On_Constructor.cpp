#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;






 ///  write a program , take phone datails as input and stored them in object & use constructors


//  Phone Datails :-

//  1.Name 
//  2.RAM 
//  3.Processor
//  4.Batter



 class Mobile{
     private: 
          string name;
          int RAM;
          string processor;
          int Battery;

          public:
               Mobile(string name_a="Null", int RAM_a=0, string processor_a="Null" ,int Battery_a=0 ){
                   name=name_a;
                   RAM=RAM_a;
                   processor=processor_a;
                   Battery=Battery_a;

               }

               Mobile(Mobile &mob){
                   name=mob.name;
                   RAM=mob.RAM;
                   processor=mob.processor;
                   Battery=mob.Battery;
               }

               void getMobileData();

 };

 void Mobile:: getMobileData(){
     cout<<endl<<"name: "<<name;
      cout<<endl<<"RAM: "<<RAM;
       cout<<endl<<"Processor: "<<processor;
        cout<<endl<<"Battery : "<<Battery;
 }

 int main(){

     Mobile doko;
     Mobile doko2("Doko123", 4,"Snapdragen",4000);
     Mobile doko3(doko2);

     doko.getMobileData();
     doko2.getMobileData();
     doko3.getMobileData();
     return 0;
 }

 