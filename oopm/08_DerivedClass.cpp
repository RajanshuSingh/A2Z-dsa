#include<iostream>
using namespace std;

class Human{

    string religion,color;

public : //protected maintains encapsulation
string name;
int age,weight;

};

class Student:private Human{
   private:
int rollNo, fees;
public:

Student(string name, int age, int weight, int rollNo,int fees){

this->name=name;
this->age=age;
this->weight=weight;
this->rollNo=rollNo;
this->fees=fees;

}
void display(){
    cout<<"Name is "<<name<<", Age is "<<age<<", Weight is "<<weight<<", Roll number is "<<rollNo<<" and fees is "<<fees<<endl;
}
};

class  Teacher: public Human{
int salary, id;
};

int main(){

Student A("Rajanshu",21,89,1234,60);

A.display();

Teacher B;
B.name="Raaaj";

// A.fun("rajanshu", 19,49);


}