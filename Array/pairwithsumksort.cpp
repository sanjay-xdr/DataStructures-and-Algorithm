//pair with sum k in sorted array using two pointer approach ->O(n);
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={1,3,4,5,6,8,9,10,12,14};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=10;
	
	int start=0,last=n-1;
	while(last>start){
		
		if(arr[start]+arr[last]==k){
			cout<<arr[start]<<" + "<<arr[last]<<" = "<<k<<"\n";
			start++;
			last--;
		}
		
		else if(arr[start]+arr[last]>k){
			last--;
		}
		else if(arr[start]+arr[last]<k)
		 start++;
	}
}
