//finding min and max element in single scan ->O(n)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={5,8,-2,90,6,2,10,7,-1,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<n;i++){
		
		if(arr[i]>max)
		max=arr[i];
		
		else if(arr[i]<min)
		min=arr[i];
		
		
	}
	cout<<"Minimum element is "<<min<<"\n";
	cout<<"Maximum element is "<<max;
}
