#include<iostream>
using namespace std;

class Area{
public:

int calculateArea(int r){
    return 3.14*r*r;
}

int calculateArea(int l,int b){
    return l*b;
}


};

int main(){
Area A1;

A1.calculateArea(7);
Area A2;

A2.calculateArea(3,4);



}