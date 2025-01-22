#include<iostream>
using namespace std;



int main(){

try{
    int *p= new int[1000000000000000];
    cout<<"Memory allocation is succesful";
    delete[]p;
}
catch(const exception &e){ //exception is the name of class
 cout<<"exception occured due to line 9: "<<e.what()<<endl;
}
}