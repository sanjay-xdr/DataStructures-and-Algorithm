#include<bits/stdc++.h>
using namespace std;

void shiftbyone(int *arr,int n){
	int temp=arr[0];
	for(int i=0;i<n-1;i++)
		arr[i]=arr[i+1];
	 arr[n-1]=temp;
}

void shift(int *arr,int n,int d){
	
	for(int i=0;i<d;i++){
		shiftbyone(arr,n);
	}
      
}

void print(int *arr,int n){
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}

int main(){
	int arr[]={1,2,3,4};
	cout<<"i am here"<<"\n";
	int n=sizeof(arr)/sizeof(arr[0]);
	shift(arr,n,2);
	print(arr,n);
		
	
	
}
