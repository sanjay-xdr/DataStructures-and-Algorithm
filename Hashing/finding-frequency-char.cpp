#include<bits/stdc++.h>
using namespace std;
int main(){
	
	string s="therearesomanythingsinsidemyhead";
	
	int n=s.size();
	
	int hash[26]={0};
	
	for(int i=0;i<n;i++){
		hash[s[i]-'a']++;
	}
	
	
	int q;
	cin>>q;
	while(q--){
		char d;
		cin>>d;
		cout<<hash[d-'a']<<endl;
	}
	
	
	
}
