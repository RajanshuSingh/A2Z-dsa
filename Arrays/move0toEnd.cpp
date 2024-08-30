#include <bits/stdc++.h>
using namespace std;

int swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void moveZeroes(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
        }
    if(j==-1) return;
 
 for(int i=j+1;i<n;i++)
 {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
 }
return;
    }


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    moveZeroes(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
