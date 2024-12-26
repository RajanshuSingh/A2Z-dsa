#include<iostream>
using namespace std;

class Student    // Student is nothing but user defined data type 
{ 
    public: 

    //Access modifier: 1. public 2. protected 3. private(default)

    

string name, grade;
int age, marks;

//function Getter and Setter:

public:
void setname(string s){
  name=s;
}
void setage(int a){
  age=a;
} 
void setgrade(string g){
  grade=g;
}
void setmarks(int m){
  marks=m;
}
void getname(){
  cout<<name<<endl;
}
void getage(){
  cout<<age<<endl;
}
};

class a{
char d;
int c;
char e;

};


int main()
{

Student S1;  
  // S1 is object while Student is class name 
//                 // <data-type  variable name> format

//   S1.name="Rajanshu"  ;
//   S1.grade="A+"        ;
//   S1.age=19  ;
//   S1.marks=400;

// cout<<S1.age;

S1.setname("Rajanshuloves");  //we are making functions so that we can use if else condition, try catch and other functionalities too
S1.setage(19);


// S1.getage();
// S1.getname();
// cout<<sizeof(S1);

a obj1;

cout<<sizeof(a);  //even empty class has the size 0 because the cpp standard guarantees that size of any class is at least one so that no object shall have the same memory address.

//memory allocation is being done through 'Padding'


//dynamic memory location can also be done using pointer approach same as in the case of normal address allocation.

Student *S = new Student;// className *Objname = newkeyword className
(*S).name="Rohit";
(*S).age=10;
(*S).grade="A+";
(*S).name="Rohit";
 //S->name="rajanshusingh"; 

 cout<<S->name<<endl;
 cout<<S->grade;


}

