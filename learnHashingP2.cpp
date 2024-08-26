#include<bits/stdc++.h>
using namespace std;
 
 int main(){
    string s;
    cin>>s;
    int q;
    cin>>q;

    //precompute
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]+=1;
    }

    while(q--){
        char c;
        cin>>c;
        //FETCH
        cout<<hash[c]<<endl;    // if smaller case is not preferred otherwise  hash[c-'a'] for lower case and hash[c-'A'] for upper case

    }
    
    }