#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;





//friend class

// Can Access and use fatures and 
// functionalities of each other


//create Friend Class



class Alpha{
    private:
       int a1;
       public:
         Alpha(int arg=0){
             a1=arg;
         }

         friend class Beta;
};



class Beta{
    private: 
      int b1;
      public:
       Beta(int arg=0){
       b1=arg;
 }

 int sum(){
     Alpha a(9);
     int sum=a.a1+b1;
     return sum;
 }

};

int main()
{

Beta b(2);
cout<<"Sum is : "<<b.sum()<<endl;


    return 0;
}

