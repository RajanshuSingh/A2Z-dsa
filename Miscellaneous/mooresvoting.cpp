#include<bits/stdc++.h>
using namespace std;


int majorityElement(vector<int> v) {
int n=v.size();
int cnt=0;
int el;
 for(int i=0; i<n;i++)
 {
	 if(cnt==0){
		 cnt =1;
		 el=v[i];   //start with new element when it becomes o after getting cnt--

	 }

	 else if (v[i]==el){
		 cnt++;
	 }

	 else{
		 cnt--;
	 }



 }

int cnt1=0;
for(int i=0;i<v.size();i++){
	if(v[i]==el){
		cnt1++;
	}


}

if(cnt1 >n/2)
{
	return el;
}
return -1;


}

int main(){

    vector<int> v={1,2,3,4,5,6,7,8,9,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5};
    cout<<majorityElement(v);
    return 0;
}