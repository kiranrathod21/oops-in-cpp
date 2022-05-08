#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;






//Operator Overloading


// When we make operators (+, -,/,*) work for user-defined types 
//like objects and structures. this known as oprator overloading
/*
class A{
    private:
     int weight;
     public:
       A(int x=0){
         weight=x;
       }

       void PrintValue(){
           cout<<endl<<"weight is: "<<weight;
       }

       A operator+(A w){
           A temp;
           temp.weight=weight+ w.weight;
           return temp;
       }
};


int main(){
   
   int a=34,b=45,c=0;
   c=a+b;
   cout<<endl<<"Total: "<<c;


  // operatr overloading

  A person1(89);
  A person2(99);
  A total;
  total= person1 + person2;
   total.PrintValue();


    return 0;
}


*/


 //Write Program to overload ++ Pre increment operator & Post increament


/*


 class person{
     private:
        int weigth;
     public: person(int w=0){
         weigth=w;
     }

     void PrintWeigth(){
         cout<<endl<<"Weigth is: "<<weigth;

     }
    
    // PreIncreament
     void operator++(){     
         ++weigth;
     }
  

  // PostIncreament
     void operator++(int){
         ++weigth;
     }
 };

 int main(){

     person Jon(78);
     ++Jon;

     Jon++;

     Jon.PrintWeigth();
     return 0;
 }

 */
