#include<bits/stdc++.h>
using namespace std;


//https://www.youtube.com/watch?v=KEs5UyBJ39g
//https://www.youtube.com/@takeUforward/videos
//https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2/
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
