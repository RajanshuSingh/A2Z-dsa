#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){    //selection sort
    for(int i=0;i<=n-2;i++){
         int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min])
            {
                min=j;
            }


        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }

}
void bubbleSort(int arr[], int n) {

        // Your code here     //bubble sort
        for (int i = n - 1; i >= 0; i--) 
        
        {
            int didSwap=0;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                 didSwap=1;
            }
        }
        if(didSwap == 0){
            break;
        }
        cout<<"runs\n"<<endl;
        }
        
    }


 
 int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
// selection_sort(arr,n);
//     for(int i=0;i<=n;i++){
//     cout<<arr[i]<<" ";
// }

// cout<<endl;

bubbleSort(arr,n);
for(int i=0;i<=n;i++){
    cout<<arr[i]<<" ";
}

return 0;
 }
