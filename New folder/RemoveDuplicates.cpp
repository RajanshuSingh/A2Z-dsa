
#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {   //if the element is not equal to the next element then increment i and assign the value of j to i
      
      arr[i+1] = arr[j];   
      i++;
    }
  }
  return i + 1;  //returns size of the array after removing duplicates
}
int main() {
  int arr[] = {0,0,0,1,2,3,3,3,3,4,4,4,4,5,5,5,5,5,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}

