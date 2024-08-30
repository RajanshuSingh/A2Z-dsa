#include <bits/stdc++.h>
using namespace std;

void rotateLeft(int arr[],int n,int k){
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);

}


// or 
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k %= n;
//         reverse(nums.begin(), nums.end());
//         reverse(nums.begin(), nums.begin()+k);
//         reverse(nums.begin()+k, nums.end());
//     }
// };






    //or if vector is used then
//     class Solution {
// public:
//     void Reverse(int nums[], int start, int end) {
//         while (start <= end) {
//             int temp = nums[start];
//             nums[start] = nums[end];
//             nums[end] = temp;
//             start++;
//             end--;
//         }
//     }

// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         k = k % n;  // In case k is greater than the size of nums
//         if (n == 0 || k == 0) return;

//         // Reverse the first n-k elements
//         Reverse(nums.data(), 0, n - k - 1);

//         // Reverse the last k elements
//         Reverse(nums.data(), n - k, n - 1);

//         // Reverse the entire array
//         Reverse(nums.data(), 0, n - 1);
//     }
// };




int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    rotateLeft(arr,n,k);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}