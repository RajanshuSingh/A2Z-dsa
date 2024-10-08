#include<bits/stdc++.h>
using namespace std;

// int fact(int n){
 
//  if(n==0) return 1;

// return n*fact(n-1);

// }

// int main(){

//     int n;
//     cin>>n;
//     cout<<fact(n);
//     return 0;

// }

bool palString(int i, string &s)
{
     if(i>=s.size()/2){
        return true;
    }

    
 if( s[i]!=s[s.size()-i-1])
{
  return false;
}
return palString(i+1,s);
}

int main(){
    string s="nadsn";
    
    cout<< palString(0,s);
 return 0;

}