#include <bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}



int partition(int arr[],int low,int high){

    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}


void quick_sort(int arr[],int low, int high){
    if(low<high){
        int pi= partition(arr,low,high);
        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
    }


}

 int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
quick_sort(arr,0,n-1);
    for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
}
    
    return 0;
}