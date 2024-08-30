#include <bits/stdc++.h>
using namespace std;

void rotateArrayLeft(int arr[], int n, int k) {
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];
    }
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}
void rotateArrayRight(int arr[], int n, int k) {
    int temp[k];
    for (int i = n - k; i < n; i++) {
        temp[i - n + k] = arr[i];
    }
    for (int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

}

int onePlaceLeft(int arr[], int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    return 0;
}
int onePlaceRight(int arr[], int n) {
    int temp = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = temp;
    return 0;
}



int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
int k;
cout<<"Enter the number of elements you want to rotate the array by: ";
cin>>k;

    return 0;
}