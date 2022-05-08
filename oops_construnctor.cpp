#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;



class A{
    private:
    int age;
    public:
    A(int x){   //constructors
        age=x;   
    }
    int getData(){
        return age;
    }
};
int main(){

    A a_obj(28);
    cout<<"The age is:"<<a_obj.getData();
    return 0;
}






// types:- 1) non-parametrized constructor or Default has_trivial_copy_constructor
//         2) Parametrized Costructor 
//         3) copy Constructors





