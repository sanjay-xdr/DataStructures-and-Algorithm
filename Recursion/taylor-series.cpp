//program to find the taylor series i.e. expansion of e raise to power x
#include<bits/stdc++.h>
using namespace std;

double expension(int x,int n){
	static double p=1,f=1;
	double r;
	if(n==0){
		return 1;
	}
	else{
		r=expension(x,n-1);
		p=p*x;
		f=f*n;
		return (r+p/f);
	}
}

int main(){
	
	cout<<expension(4,10);
}
