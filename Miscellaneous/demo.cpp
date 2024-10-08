#include <iostream>
using namespace std;
 int main()
{ 
  string s; int count=0;
   cin>>s;
  cout<<"string is : "<<s<<endl;
  int l=s.length();

  for(int i=0;i<l;i++){

//cout<<s[i]<<" ";
{
if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' )
  {
count++;
  }
  
  }
  }
  cout<<" no of vowels in "<<s<< " are : ";
  cout<<count<<" ";
  }
