#include<bits/stdc++.h>
using namespace std;

int TOH(int n,int A,int B,int C){
	if(n>0){
		
		//move disc from A to B using C
		TOH(n-1,A,C,B);
		cout<<"("<<A<<" "<<C <<")";
		//move disc from B to C using A
		TOH(n-1,B,A,C);
	}
}

int main(){
	TOH(4,1,2,3);
	
}
