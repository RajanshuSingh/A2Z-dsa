#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> m;
    m.insert(1);
    m.insert(1);
    m.insert(2);
    m.insert(1);
    m.insert(2);
    m.insert(1);

    for(auto it:m){
        cout<<it<<" ";
    }
 cout<<endl;
//     m.erase(2);    //if delete all the occurences of 2

//     for(auto it:m)
//     {
//         cout<<it<<" ";
//     }



// Output: 1 2 2

//         1
// Time Complexity: O(logn)
// Space Complexity: O(n)

//if we want to delete only selected occurences of 1 then we can use iterator

m.erase(m.find(1),m.find((1)+2));//delete only one occurence of 1
for ( auto it:m)
{
    cout<<it<<" ";
}

// m.erase(m.find(2),m.find((2)+2)); //delete only one occurence of 1
// for ( auto it:m)
// {
//     cout<<it<<" ";
// }
}