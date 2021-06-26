//program to find the factorial of a number
#include<bits/stdc++.h>
using namespace std;

 int factorial(int n){

	if(n==0){
		return 1;
	}
	else{
		return factorial(n-1)*n;
	}
}

int main(){
	
	 int n;
	cout<<"Enter the number ";
	cin>>n;
	if(n<0){
		cout<<"Please enter a positive number";
	
	}else{
	
	cout<<"Factorial of the given number is ";
	cout<<factorial(n);
}
}
