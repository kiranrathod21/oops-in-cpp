#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;




// Operator Overoading

// Write a program , implement overloading of Comparision Oerator (>,<)


class person{
    private:
      int weight;

     public:
       person (int w=0){
           weight=w;
       } 

       friend bool operator>(person x, person y);
         friend bool operator<(person x, person y);
};


   bool operator<(person x, person y){   // less than 
       return x.weight<y.weight;
   }

   
   bool operator>(person x, person y){   //greater than 
       return x.weight>y.weight;
   }


int main(){

    int w1,w2;
    cout<<"Enter Weight of jon: "<<endl;
    cin>>w1;
    cout<<" Enter Weight Of Rick: "<<endl;
    cin>>w2;

    person jon(w1);

    person Rick(w2);

    if(jon > Rick){
        cout<<"jon is heavy"<<endl;
    }
    else{
        cout<<"Rick is heavy"<<endl;
    }
    return 0;
}


