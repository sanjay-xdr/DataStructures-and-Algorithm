#include <bits/stdc++.h>
using namespace std;
 
 void solve(int n, int a[],vector<int> &ans,int index,int sum,int s){
 
 if(index==n){
   if(s==sum){
     for(auto it:ans){
       cout<<it<<" ";
     }
     cout<<endl;
     
   }
   return;
 }
 
 ans.push_back(a[index]);
 s+=a[index];
 solve(n,a,ans,index+1,sum,s);

 s-=a[index];
  ans.pop_back();
   solve(n,a,ans,index+1,sum,s);
 

}

int main() {
    
 int n;
 int sum;
 
 
 cin>>n;
 cin>>sum;
 int a[n];
 
 for(int i=0;i<n;i++){
   cin>>a[i];
 }
 
 vector<int>ans;
 
 solve(n,a,ans,0,sum,0);
   
 

   
   
}