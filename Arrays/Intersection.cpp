#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &arr1,int n, vector<int> &arr2, int m) {
    int i = 0, j = 0; // pointers
    vector<int> ans; // Intersection vector
    while (i < n && j < m) {
      if(arr1[i]<arr2[j]){   // if element of arr1 is smaller than element of arr2 then increment i
          i++;
      }
      else if(arr1[i]>arr2[j]){ // if element of arr1 is greater than element of arr2 then increment j
          j++;
      }
      else{  // if both the elements are equal then push it in the intersection vector
          if(ans.size()==0 || ans.back()!=arr1[i])  // to avoid duplicates in the intersection vector 
          {
              ans.push_back(arr1[i]);            // if the element is not present in the intersection vector then push it in vector ans.
          }
          i++;
          j++;
      }

    
    }
    return ans;}

int main() {
    int n;
    cin>>n;
    vector<int> arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int> arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }


    vector<int> ans = intersection(arr1,n,arr2,m);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";


    }
    
    }