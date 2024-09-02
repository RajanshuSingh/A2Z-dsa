#include <bits/stdc++.h>
using namespace std;


int longestSubarrayWithSumK(vector<int> a, long long k) {     //most optimal for negatives
    
  map<long long, int> preSumMap;
  long long sum=0;
  int maxLen=0;
  for(int i=0;i<a.size();i++){
      sum+=a[i];
      if(sum == k){
          maxLen=max(maxLen,i+1);
      }
      long long rem=sum-k;
      if (preSumMap.find(rem) != preSumMap.end()) {
          int len = i - preSumMap[rem];
          maxLen = max(maxLen, len);
      }
    if(preSumMap.find(sum)==preSumMap.end()
    )
    { preSumMap[sum] = i; 
      }
  }
  return maxLen;

}


   int lenOfLongSubarr(int A[],  int N, int K) {     //optimal for positive and with zeroes
   
        

    int left = 0, right = 0; // 2 pointers
    long long sum = A[0];
    int maxLen = 0;
    while (right < N) {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while (left <= right && sum > K) {
            sum -= A[left];
            left++;
        }

        // if sum = k, update the maxLen i.e. answer:
        if (sum == K) {
            maxLen = max(maxLen, right - left + 1);
        }

        // Move forward the right pointer:
        right++;
        if (right < N) sum += A[right];
    }

    return maxLen;
        
    } 

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

    cout<<longestSubarrayWithSumK(arr,k);
    cout<<lenOfLongSubarr(arr.data(),n,k);


}