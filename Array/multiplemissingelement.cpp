//finding multiple missing element from sorted array in O(n);
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int arr[]={6,7,8,10,13,14,15};
	
	int size=sizeof(arr)/sizeof(arr[0]);
	
	int diff=arr[0];
//	cout<<diff;
	
	for(int i=0;i<size;i++){
		
	
		int t=arr[i]-i;
	
		if(t!=diff){
		while(diff<t){
			cout<<diff+i<<" ";
			diff++;
			}
		
		}	

	}
	
	
	
}
