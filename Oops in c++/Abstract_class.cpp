#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;







//Abstract Class

// define:- Abstract class is used when never want to instantiate object of Base class


//defined :- Abstract class exists only to act as parent of Derived class


 
class parent{             // Abstract class
    public: 
       virtual void show()=0;    //Pure Virtual Function 
                                  // when any virtual function intialized with zero
      
};

class boy:public parent{
   public:
      void show(){
          cout<<"Brown Bun "<<endl;
      }
};


class girl:public parent{
    public: 
       void show(){
           cout<<"Pink Bun"<<endl;
       }
};


int main(){
   parent *ptr;

   ptr=new boy();
   ptr->show();
   ptr=new girl();
   ptr->show();

    return 0;
}





