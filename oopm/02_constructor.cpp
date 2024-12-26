#include<iostream>
using namespace std;

class Customer{
string name;
int accountNo;
int balance;

public:

Customer(){         //default constructor
    name="rajanshu";
    accountNo= 123455;
    balance=45;
}



inline Customer (string a,int b, int c): name(a),accountNo(b ), balance(c){

}

//Copy Constructor made by us

Customer(Customer &B){
    name= B.name ;
    accountNo=B.accountNo;
    balance=B.balance;

}

void display(){
    cout<<name<<" "<<accountNo<<" "<<balance<<endl;
}
};

int main()
{
    Customer obj,obj1;
    Customer obj3("motibhains", 23,1000);
    obj.display();
    obj3.display();  
    Customer obj4(obj1);   //copy constructor syntax
    obj4.display();
    //other method of copy constructor
    Customer obj5;
    obj5 =obj4;
    obj5.display();


    

    // obj1.display("bhains", 12 , 31);

    

}

