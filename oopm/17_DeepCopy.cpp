#include<iostream>
#include<string>
using namespace std;

class Student{

    public: 

    string name;
    double *cgpaPtr;

    Student(string  name, double cgpa){

        this->name=name;
       cgpaPtr = new double;
       *cgpaPtr=cgpa;
    }
     
     Student(Student &orgObj){
        this->name=orgObj.name;
        cgpaPtr = new double;
        *cgpaPtr= *(orgObj.cgpaPtr);

     }
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Cgpa : " << *cgpaPtr<<endl;
    }


};

int main(){

    Student S1("Rajanshu Singh", 8.5);
    Student S2(S1);
    S1.getInfo();

    *(S2.cgpaPtr)=9.2;
    S1.getInfo();
    S2.name="Akrati Jadon";
    S2.getInfo();

}