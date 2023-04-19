#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int arr[7]={1,2,3,1,3,2,12};
	
	
	int n=7;
	
	map<int,int>map	;
	
//	map<char,int> charmap;
	
	
	for(int i=0;i<n;i++){
		map[arr[i]]++;
	}
	int q;
	cin>>q;
	while(q--){
		int number;
		cin>>number;
		cout<<map[number]<<endl;
	}
}
