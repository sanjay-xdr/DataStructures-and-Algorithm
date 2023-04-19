#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int arr[]={32,34,5,1,89,99};
	
int n=6;

//select minimun element and swap it with the current index

for(int i=0;i<=n-2;i++){
	int mini=i;
	
	//finding the minimum element
	for(int j=i;j<=n-1;j++){
		if(arr[mini]>arr[j]){
			mini=j;
		}
		
		//swapping it with the current index
			int temp=arr[i];
	arr[i]=arr[mini];
	arr[mini]=temp;
	}

}


for(int i=0;i<=n-1;i++){
cout<<arr[i]<<" ";
}
	
	
}
