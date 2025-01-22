#include<iostream>
#include<fstream>

using namespace std;

int main(){

//for creating and writing


    // //File  ko open krna - phla task

    // ofstream fout;  // fout-object
    // fout.open("zoom.txt") ;//if file not present it will create the file

    // //then i can write

    // fout<<"Hello India";

    // fout.close(); // resource release kr paun



//for reading 

// ifstream fin; //fin object ka naam h

// //file ko open kro

// fin.open("zoom.txt");
// //file ko read kro

// char c;
// c=fin.get();
// fin>>c;

// while(!fin.eof()){
// cout<<c;
// c=fin.get(); //ab space bi include ho jaega
// }

// //doesnt treat space tab as character so doesnt include in o/p

// fin.close();



vector<int>arr(5);
cout<<"Enter the Input";
for(int i=0;i<5;i++)
cin>>arr[i];

//file ko open kro

ofstream fout;
fout.open("zero.txt");
fout<<"Original Data\n ";

for(int i=0; i<5; i++)
{
    fout<<arr[i];
};

fout<<"\n Sorted Data";


sort(arr.begin(),arr.end());

for(int i=0; i<5; i++)
{
    fout<<arr[i];
};

}