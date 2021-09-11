//finding the duplicate element from sorted array
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={1,2,2,3,4,4,4,4,4,4,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int lastduplicate= -1;
	
	for(int i=0;i<size;i++){
		
		if(arr[i]==arr[i+1] && arr[i]!=lastduplicate){
		
		cout<<arr[i]<<" ";
		lastduplicate=arr[i];
		
		
	}
		
	}
	return 0;
}
