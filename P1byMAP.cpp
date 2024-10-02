#include<bits/stdc++.h>
using namespace std;
int main()
// { // for ordered map
//     int n;
//     cin>>n;    //input the array size
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];      //input array elements
//     }
//     //precompu

//     map<int,int> mpp;   //map to store the frequency of each element
//     for(int i=0;i<n;i++){  //iterate over the array
//         mpp[arr[i]]++;   //count the frequency of each element and arr[i] is the key and mpp[arr[i]] is the value
//     }

//     // for(auto i:mpp){
//     //     cout<<i.first<<"->"<<i.second<<endl;
//     // }    iterate over the map

//     int q;
//     cin>>q;  //input the number of queries
//     while(q--){   //iterate over the queries and q-- is used to decrease the   value of q by 1 which represents the number of queries
//         int number;
//         cin>>number;
//         //fetch the number

//         cout<<mpp[number]<<endl;
//     }
//         return 0;
// }
    

    //for unordered mpp

    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       unordered_map <int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        for(auto i:mpp){
            cout<<i.first<<"->"<<i.second<<endl;
        }
        int q;
        cin>>q;
        while(q--){
            int number;
            cin>>number;
            cout<<mpp[number]<<endl;
        }
        return 0;
    }
