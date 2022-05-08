#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;





// Static Member Function


// NOte:- Static member can Only access static members

class Alpha{
    private:

    int a;
    int b;

    public:

    Alpha(){
        a=5;
        b=5;
    }

    static int start;

    static int getStart(){
        start++;
        return start;
    }
};

int Alpha::start=0;


int main(){
  Alpha a1;
  cout<<"Value using object: "<<a1.getStart()<<endl;
  cout<<"Value using class Name: "<<Alpha::getStart()<<endl;

    return 0;
}
