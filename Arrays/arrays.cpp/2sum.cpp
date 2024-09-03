#include <bits/stdc++.h>
using namespace std;

void twoSumBrute(vector<int> &arr, int sum){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
    }
    cout<<"No such pair found"<<endl;
}

string twoSumOptimal(int n,vector<int> &arr, int target)
    {
         {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}
    }

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
int target;
cin>>target;

    cout<<"Optimal approach: "<<twoSumOptimal(n,arr,target);

    return 0;



}