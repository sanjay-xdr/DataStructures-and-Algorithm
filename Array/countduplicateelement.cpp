//counting the duplicate numbers in sorted array
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={1,2,3,4,4,4,5,6,6,6,6,7,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	int j;
	for(int i=0;i<n-1;i++){
		
		if(arr[i]==arr[i+1]){
			j=i+1;
			while(arr[j]==arr[i]) j++;
			cout<<arr[i]<<" is appearing "<<(j-i)<<" times \n";
			i=j-1;
		}
	}
	return 0;
}
