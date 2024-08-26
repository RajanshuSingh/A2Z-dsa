#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mpp;  //key value pair where key is unique and value can be repeated
    // map<int, pair<int, int>> mpp;  //{key,{value1,value2}}
    // map<pair<int, int>, int> mpp;  //{{value1,value2},key}

    mpp[1]=2;
    mpp.emplace(3,1);
    mpp.insert({2,4});
    // mpp[1]=5;
    mpp[(2,3)]=6; 
    
    
for(auto it:mpp)
{cout<<it.first<<" "<<it.second<<endl;}

}
