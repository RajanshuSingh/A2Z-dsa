#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n) {
    int max = arr[0];
    int secondMax = -1;
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            secondMax = max;
            max = arr[i];
        } else if (secondMax < arr[i] && arr[i] != max) {
            secondMax = arr[i];
        }
        
    }return secondMax;
    }

    int secondSmallest(int arr[], int n) {  
    int min = arr[0];
    int secondMin = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (min > arr[i]) {
            secondMin = min;
            min = arr[i];
        } else if (secondMin > arr[i] && arr[i] != min) {
            secondMin = arr[i];
        }
    }
    return secondMin;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int secondMax = secondLargest(arr, n);
    cout << "The second largest element in the array is: " << secondMax << endl;

    int secondMin = secondSmallest(arr, n);
    cout << "The second smallest element in the array is: " << secondMin << endl;
    return 0;
}