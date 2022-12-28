#include <bits/stdc++.h>
using namespace std;



void solve(int n, int a[],vector<int> &ans,int index){
  if(index==n){
    
    for(auto it:ans){
      cout<<it<<" ";
      
    }
    if(ans.size()==0){
      cout<<"{}";
    }
    cout<<endl;
    return;
  }
    solve(n,a,ans,index+1);
  ans.push_back(a[index]);
  solve(n,a,ans,index+1);
  ans.pop_back();

  
  
  
}

int main() {
    
 int n;
 
 cin>>n;
 int a[n];
 
 for(int i=0;i<n;i++){
   cin>>a[i];
 }
 
 vector<int>ans;
 
 solve(n,a,ans,0);
   
 

   
   
}