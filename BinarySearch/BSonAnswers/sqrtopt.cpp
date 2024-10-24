#include<iostream>
using namespace std;

int sqrt(int n){
int low=1, high= n;
int ans=1;

while(low<=high){
    int mid=low+high/2;
    if(mid*mid==n){
        return mid;
    }
    else if(mid*mid<n){
        low=mid+1;
        ans=mid;
    }
    else{
        high=mid-1;
    }
}

return ans;
}

int main(){
    int n=16;
    cout<<sqrt(n)<<endl;
    return 0;
}
// Time Complexity: O(log(n))
// Space Complexity: O(1)
