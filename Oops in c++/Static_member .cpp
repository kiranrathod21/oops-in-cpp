#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;



//Static Member And Static Function


//Static Member
// NOte:- Each Object will create seprate copy of itself in memory.

// Note:- Static Member would be allocated Memory only once

// note:- And that Memory shared By both the objects
//note:-Static Data member belongs a class & comman to all objects

class Alpha{
    private:
     int a;
     int b;
     public:
       Alpha(){
           a=5;
           b=5;
           start++;
       }

       static int start;
};

int Alpha::start=0;      //Global declaration



int main(){

    Alpha a1;
    Alpha a2;


    cout<<"Value using a1= "<<a1.start<<endl;
    cout<<"Value using a2= "<<a2.start<<endl;
      cout<<"Value using class name: "<<Alpha::start<<endl;

    return 0;
}

