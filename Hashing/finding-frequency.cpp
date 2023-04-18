#include<bits/stdc++.h>
using namespace std;
int main() {
 
int arr [] = { 1, 2, 3, 1, 3 };
int n=5;

int hash[13]={0};
for(int i=0;i<n;i++){
	hash[arr[i]]++;
}

int q;
cin>>q;
while(q--){
	int number;
	cin>>number;
	cout<<hash[number]<<endl;
	
}




}
