#include <bits/stdc++.h>
using namespace std;

//  map < int, int > freq;
//   vector < int > Union;
//   for (int i = 0; i < n; i++)
//     freq[arr1[i]]++;
//   for (int i = 0; i < m; i++)
//     freq[arr2[i]]++;
//   for (auto & it: freq)
//     Union.push_back(it.first);
//   return Union;


// vector < int > sortedArray(vector < int > a, vector < int > b) {
//     // Write your code here
//     int n1=a.size();
//     int n2=b.size();
//     int i=0;
//     int j=0;
//     vector<int> unionArr;
//     while(i<n1 && j<n2){
//         if(a[i]<=b[j]){
//             if(unionArr.size()==0 || unionArr.back() != a[i]){
//                 unionArr.push_back(a[i]);
//             }
//             i++;
//         }
//         else{
//             if (unionArr.size() == 0 || unionArr.back() != b[j]) {
//                 unionArr.push_back(b[i]);
//             }
//             j++;
//         }
//     }

//     while(j<n2){
//         if (unionArr.size() == 0 || unionArr.back() != b[j]) {
//                 unionArr.push_back(b[i]);
//             }
//             j++;
//     }

//     while(i<n1){
//         if(a[i]<=b[j]){
//                 if (unionArr.size() == 0 || unionArr.back() != a[i]) {
//                 unionArr.push_back(a[i]);
//                 }
//                 i++;
//         }
//     }

//     return unionArr;
// }

// vector < int > sortedArray(vector < int > &a, vector < int > &b) {
//     // Write your code here
//     int i = 0, j = 0; // pointers
//     int n=a.size();
//     int m=b.size();
//   vector < int > Union; // Uninon vector
//   while (i < n && j < m) {
//     if (a[i] <= b[j]) // Case 1 and 2
//     {
//       if (Union.size() == 0 || Union.back() != a[i])
//         Union.push_back(a[i]);
//       i++;
//     } else // case 3
//     {
//       if (Union.size() == 0 || Union.back() != b[j])
//         Union.push_back(b[j]);
//       j++;
//     }
//   }
//   while (i < n) // IF any element left in arr1
//   {
//     if (Union.back() != a[i])
//       Union.push_back(a[i]);
//     i++;
//   }
//   while (j < m) // If any elements left in arr2
//   {
//     if (Union.back() != b[j])
//       Union.push_back(b[j]);
//     j++;
//   }
//   return Union;

// }



int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }}