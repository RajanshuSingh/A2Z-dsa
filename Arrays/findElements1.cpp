#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        int Xor= 0; 
        int n=nums.size();
for(int i=0;i<n;i++){
    Xor = Xor^nums[i];

}

    return Xor;
        
    }

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<singleNumber(arr);
}

