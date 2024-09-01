#include <bits/stdc++.h>
using namespace std;

void maxCons1(vector<int> &arr,int n){   //optimal approach
    int count = 0;
    int maxCount = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxCount = max(maxCount,count);   
        }
        else{
            count = 0;
        }
    }
    cout<<maxCount;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    maxCons1(arr,n);
}
