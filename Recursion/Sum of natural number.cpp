//program to find the sum of n natural numbers
#include<bits/stdc++.h>
using namespace std;

int naturalSum(int n){
	if(n==0){
		return 0;
	}
	else{
		return naturalSum(n-1)+n;
	}
}

int main(){
	int n;
	cout<<"Enter the value of n"<<"\n";
	cin>>n;
	cout<<"Sum of first "<<n<<" natural number is "<<naturalSum(n);
	
}
