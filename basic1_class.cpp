#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;


//class
class house{
 private:
     // member variable
    int breadth=0,lenght=0; 

     //member function
       

public:
    void setData(int x,int y){
      lenght=x;
      breadth=y;   
    }
    void area(){
        cout <<"Area of house : "<<lenght*breadth<<endl;
    }
};
int main(){
    house h1,h2;   // memory get allocatd
    h1.setData(5,6);
    h1.area();

    h2.setData(7,1);
    h2.area();
return 0;
}





