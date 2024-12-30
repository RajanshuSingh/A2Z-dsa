#include <iostream>
using namespace std;

class Customer{
    string name;
    int accountNo, balance;
    static int totalCustomer;   //ab iski value change ni hogi kyuki static lga dia h
//static usko bnao jo sbke liye common rhe.
    static int totalBalance;

    public:

    Customer(string name, int accountNo, int balance){
this->name=name;
this->accountNo=accountNo;
this->balance= balance;
totalCustomer++;
totalBalance+=balance;

    }

    static void acceStatic(){
        cout<<"total no. of customer: "<<totalCustomer<<endl;
        cout<<"total balance: "<< totalBalance<<endl;
    }
    void deposit(int amount){
        if(amount>0){
           balance+=amount;
           totalBalance+=amount; 
        }
    }

    void withdrawal(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            totalBalance-=amount;
        }
    }

    void display(){
        cout<<name<<" "<<accountNo<<" "<<balance<<" "<<totalCustomer<<endl;
    }

    void displayTotal(){
        cout<<totalCustomer<<endl;
    }
};

int Customer::totalCustomer=0;
int Customer::totalBalance=0;

int main(){
   

  Customer A1("Rohit",1,1000);

// A1.displayTotal();
  Customer A2("Mohit",2,2000);
  
//   A1.display();
//   A2.display();

// A2.displayTotal();

  Customer A3("rajanshu",3,3000);
  Customer A4("akrati",4,4090);
  A1.deposit(880);
  A4.deposit(300);
  A2.withdrawal(690);
Customer::acceStatic();


}