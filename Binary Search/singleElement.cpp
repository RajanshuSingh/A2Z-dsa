#include <bits/stdc++.h>
using namespace std;


int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
int n=arr.size();

if(n==1){
	return arr[0];
}

for(int i=0;i<=n;i++){
	if(i==0){
		if (arr[i] != arr[i + 1])
                return arr[i];


	}

	else if(i==n-1){
		if(arr[i] != arr[i-1]){
			return arr[i];
		}
	}

	else{
		if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
			return arr[i];
		}
	}
}
}

