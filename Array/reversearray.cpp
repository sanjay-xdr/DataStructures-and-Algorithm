//reversing an array without using another array
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int last=n-1,start=0;
	int temp;
	while(last>=start){
		temp=arr[start];
		arr[start]=arr[last];
		arr[last]=temp;
		start++;
		last--;
		
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"\n";
}
