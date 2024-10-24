
#include <bits/stdc++.h>
using namespace std;

	int getCeil(int a[],int n,int x){
	int low=0,high=n-1;
	int ans= -1;

	while(low<=high){
		int mid=low+(high-low)/2;
		
		if(a[mid]>=x){
			ans=a[mid];
			high=mid-1;
                } else {
                        low = mid + 1;
                }
        }
        return ans;
        }

		int getFloor(int a[],int n,int x){

			int low=0,high=n-1;
			int ans=-1;

			while(low<=high){
				int mid=low+(high-low)/2;
				if(a[mid]<=x){
					ans=a[mid];
					low=mid+1;

				}
				else{
					high=mid-1;

				}
			}

			return ans;
		}


        

		pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	
int f= getFloor(a.data(),n,x);
int c= getCeil(a.data(),n,x);
return make_pair(f,c);


}