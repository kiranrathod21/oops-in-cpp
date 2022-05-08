
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;






// Inheritance

// Write a program in which cuboid class inherit rectangle class and calculate area and volume 

/*
class rectangle{
    public:
       int lenght;
       int breadth;

       void area(){
           cout<<"Area of Rectangle: "<<lenght*breadth<<endl;

       }
};

class cuboid:public rectangle{
  public:
    int height;

    void volume(){
        cout<<"volume of cuboid: "<<lenght*breadth*height<<endl;
    }
};


int main(){
    cuboid c;
    c.lenght=10,c.breadth=20,c.height=30;
    c.area();
    c.volume();
    return 0;
}


*/



//Constructor & Inheritance

//note:-If we don't specify  a constructor, then derived class will use
// appropriate constuctor from baseclass(Applicable only to Default Constructor)
/*
class base{
    public:
      base(){
          cout<<"Default constructor of base class"<<endl;

      }

       base(int b){
          cout<<"Paramiterized  constructor of base class"<<endl;

      }
};
 
class derived: public base{
    //empty
};

int main(){
    derived d;
    return 0;
}

*/



// Example :-2

//Note:- 1st Default constructor of base class ,then Default constructor of derived class is called
//Note:- 2nd Parametried constructor of base class is not called when Para.Consructor is Present in derived class

/*

class base{
    public:
      base(){
          cout<<"Default constructor of base class"<<endl;

      }

       base(int b){
          cout<<"Paramiterized  constructor of base class"<<endl;

      }
};
 
class derived: public base{
    public:
    derived(){
          cout<<"Default constructor of derived class"<<endl;
    }
    derived(int d){
          cout<<"Paramiterized constructor of derived class"<<endl;
    }

};

int main(){
     derived d;
    derived d1(9);
    return 0;
}


*/



//Example:-3
/*

class base{
    public:
      base(){
          cout<<"Default constructor of base class"<<endl;

      }

       base(int b){
          cout<<"Paramiterized  constructor of base class: "<<b<<endl;

      }
};
 
class derived: public base{
    public:
    derived(){
          cout<<"Default constructor of derived class"<<endl;
    }
    derived(int d):base(d)
    {
          cout<<"Paramiterized constructor of derived class: "<<d<<endl;
    }

};

int main(){
     derived d(9);
  
    return 0;
}

*/