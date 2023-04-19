//Best case TC is big o of N

#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int arr[]={32,34,5,1,89,99};
	
int n=6;

//select minimun element and swap it with the current index
for(int i=n-1;i>=0;i--){
	int swapCount=0
	for(int j=0;j<i-1;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
			swapCount=1;
		}
	}
	
	if(swapCount==0)
	break;
}



for(int i=0;i<=n-1;i++){
cout<<arr[i]<<" ";
}
	
	
}
