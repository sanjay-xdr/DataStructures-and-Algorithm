//finding pair of element with sum =k ->O(n^2) use hashing for this as well
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={6,3,8,10,16,7,5,2,9,14};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=18;
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==k){
				cout<<arr[i]<<" + "<<arr[j]<<" = "<<k<<"\n";
			}
		}
	}
	return 0;
	
}
