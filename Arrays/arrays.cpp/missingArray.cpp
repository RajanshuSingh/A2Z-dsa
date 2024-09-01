#include <bits/stdc++.h>
using namespace std;

//better approach


// void missingArray(vector<int> arr,int n){

//     int hash[n+1] = {0};
//     for(int i=0;i<n;i++){
//         if(arr[i]>0 && arr[i]<=n){
//             hash[arr[i]] = 1;
//         }
//     }

//     for(int i=1;i<=n;i++){
//         if(hash[i]==0){
//             cout<<i<<" ";
//         }
//     }



// }


//optimal approach

 int missingArray(vector<int> arr,int n){

    int XOR1=0,XOR2=0;
    for(int i=0;i<n;i++){
          XOR2 = XOR2^arr[i];
        XOR1 = XOR1^(i);
      
    }
    XOR1=XOR1^n;
    return XOR1^XOR2;
}





int main(){
int n;
cin>>n;
vector<int> arr(n);

for(int i=0;i<n;i++){
    cin>>arr[i];
}
missingArray(arr,n);
cout<<missingArray(arr,n);

return 0;


}