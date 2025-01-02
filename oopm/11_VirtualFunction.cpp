#include <iostream>
using namespace std;


class Animal{

public:
virtual void speak(){ //yha virtual keyword lgane se complier compile time me na read krke run time me krega
    cout<<"HU HU\n";
}
};

class Dog: public Animal{

public: 
void speak(){
    cout<<"Bark "<<endl;
}

// void roti(){
//     cout<<"Hello\n";
// }

};
class Cat: public Animal{

public: 
void speak(){
    cout<<"Meow "<<endl;
}

// void roti(){
//     cout<<"Hello\n";
// }

};


int main(){

// Animal *p; //a pointer p which points towards P.
// p= new Dog();  // p me Dog k object ka address ho rha h.
// p->speak();// pointer call kr rha h speak function ko
// p->roti(); //it will not give any value kyunki P jo pointer h wo animal ko point kr rha h

//Why not normal approach
//Dog d1;
//d1.speak();

//Solution:

Animal *p;
vector<Animal*> animals;
animals.push_back(new Dog());
animals.push_back(new Cat());
animals.push_back(new Animal());
animals.push_back(new Dog());
animals.push_back(new Cat());


//how to write code?

for(int i=0;i<animals.size();i++){
    p=animals[i];
    p->speak();
}

}