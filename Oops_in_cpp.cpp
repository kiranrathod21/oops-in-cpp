#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

/*
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
*/





//constructors
/*

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

*/  




// types:- 1) non-parametrized constructor or Default has_trivial_copy_constructor
//         2) Parametrized Costructor 
//         3) copy Constructors


 // 1) non-parametrized constructor or Default has_trivial_copy_constructor

/*
 class Person{
      
      private: 
           string name;
           int age;
           float height;


      public:
           Person(){
               name="Null";
               age=0;
               height=0.0f;
           }     


           void getData(){
               cout<<"Name : "<<name<<endl;
                cout<<"Age : "<<age<<endl;
                cout<<"height : "<<height<<endl;

           }

 };


 int main(){

     Person  obj;
     obj.getData();
     return 0;
 }

*/  




 // 2) Parametrized Costructor 


/*
 class Person{
      
      private: 
           string name;
           int age;
           float height;


      public:


        public:
           Person(){
               name="Null";
               age=0;
               height=0.0f;
           }     


           Person(string name_a, int age_a, float height_a){
               name=name_a;
               age=age_a;
               height=height_a;
           }     


           void getData(){
               cout<<"Name : "<<name<<endl;
                cout<<"Age : "<<age<<endl;
                cout<<"height : "<<height<<endl;

           }

 };


 int main(){

     Person  obj, obj2("Kiran", 22, 185);
     obj.getData();
     obj2.getData();
     return 0;
 }

*/

// 3) copy Constructors

/*
 class Person{
      
      private: 
           string name;
           int age;
           float height;


      public:


        public:
           Person(){
               name="Null";
               age=0;
               height=0.0f;
           }     


           Person(string name_a, int age_a, float height_a){
               name=name_a;
               age=age_a;
               height=height_a;
           }  


           Person(Person &obj2){
                name=obj2.name;
               age=obj2.age;
               height=obj2.height;
           }   


           void getData(){
               cout<<"Name : "<<name<<endl;
                cout<<"Age : "<<age<<endl;
                cout<<"height : "<<height<<endl;

           }

 };


 int main(){

     Person  obj, obj2("Kiran", 22, 185), obj3(obj2);
     obj.getData();
     obj2.getData();
     obj3.getData();
     return 0;
 }

*/



// Overloaded Constructor


/*

 class Person{
      
      private: 
           string name;
           int age;
           float height;


      public:


    
             


           Person(string name_a="Null", int age_a=0, float height_a=0.0f){
               name=name_a;
               age=age_a;
               height=height_a;
           }  


           Person(Person &obj2){
                name=obj2.name;
               age=obj2.age;
               height=obj2.height;
           }   


           void getData(){
               cout<<"Name : "<<name<<endl;
                cout<<"Age : "<<age<<endl;
                cout<<"height : "<<height<<endl;

           }

 };


 int main(){

     Person  obj, obj2("Kiran", 22, 185), obj3(obj2);
     obj.getData();
     obj2.getData();
     obj3.getData();
     return 0;
 }
*/


 ///  write a program , take phone datails as input and stored them in object & use constructors


//  Phone Datails :-

//  1.Name 
//  2.RAM 
//  3.Processor
//  4.Batter

/*

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

 */

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


// Overriding Member Function

// Note:- Redefining functionality of BASE class into DERIVED class ,then if we 
//        create  OBJECT of DERIVED class


// Note:- Derived class object would call , function in derived class ,
//      if same function exists in both classes


/*
class base{
public:
  void Msg(){
      cout<<"It is a base class"<<endl;
  }


};

class derived: public base{
public:
     void Msg(){
      cout<<"It is a derived class"<<endl;

      base::Msg();
  }


};


int main(){

    derived d;
    d.Msg();
    return 0;
}



*/


// Relations of Inheritance

// 1) IsA relationship
// 2) hasA relationship






//Polymorphism

// 1)Base class Pointer And Derived Class Object?

// We can Only Access features of Base class

// 2)virtual Function

// Virtual means existing appearace but not in reality
// Virtual Function means functon exsting in class but can't be used

//Program that appears to be calling a function of one class may in reality be calling a function 
// of different class.


/*


class base{
    public:
    virtual  void show(){
          cout<<"Base class"<<endl;
      }
};

class derived1:public base{
    public:
      void show(){
          cout<<"Derived class 1"<<endl;
      }
};

class derived2:public base{
    void show(){
        cout<<"Derived class 2"<<endl;
    }
}; 

int main(){
    base *ptr;
    ptr=new derived1();
    ptr->show();

    ptr=new derived2();

    ptr->show();
    return 0;
}

*/



//Abstract Class

// define:- Abstract class is used when never want to instantiate object of Base class


//defined :- Abstract class exists only to act as parent of Derived class

/*
 
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


*/




//Virtual Destructor


/*


class base{
    public:
    virtual  ~base(){
        cout<<"Base class destructor"<<endl;
      }
};

class derived :public base{
    public:
       ~derived(){
       cout<<"Derived class destructor"<<endl;
       }
};



int main(){

base *ptr=new derived;  // pointer of base class & object of derived class

delete ptr;



    return 0;
}


*/





// Friend function

// Note- Friend Function connecting two class or more (acts as bridge)

/*
class Alpha{
    private:
      int a1;

     public:
       Alpha(int arg=0){
           a1=arg;
       } 

       friend void fun();
};


class Beta{
    private:
      int b1;

     public:
       Beta(int arg=0){
           b1=arg;
       } 
     friend void fun();  
};

void fun(){
    Alpha a(8);
    Beta b(2);
   int x=a.a1+ b.b1;
   

   cout<<"Sum: "<<x<<endl;
}

int main(){

    fun();
    return 0;
}

*/

// Operator Overoading

// Write a program , implement overloading of Comparision Oerator (>,<)

/*
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


*/

//friend class

// Can Access and use fatures and 
// functionalities of each other


//create Friend Class

/*

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

*/

//Static Member And Static Function


//Static Member
// NOte:- Each Object will create seprate copy of itself in memory.

// Note:- Static Member would be allocated Memory only once

// note:- And that Memory shared By both the objects
//note:-Static Data member belongs a class & comman to all objects
/*
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

*/


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
