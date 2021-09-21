//counting the number of duplicats element in unsorted array -> O(n^2)  use hashing for this 
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int arr[]={8,3,6,4,6,5,6,8,6,4,7,2,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	
	for(int i=0;i<n-1;i++)
	{ 
	   int count=1;
		if(arr[i]!=-1){
		
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
				arr[j]=-1;
			}
		}
		if(count>1){
			cout<<arr[i]<<" is the repeating "<<count<<" times\n";
		}
		
	}
	
	}
	
}
