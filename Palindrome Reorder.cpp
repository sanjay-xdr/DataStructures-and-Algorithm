#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){


    string s;
    cin>>s;

ll n=s.size();
 map<char,int> mp;

 for(int i=0;i<n;i++){
    mp[s[i]]++;
 }
int oddCount=0;
char ch;
 for(auto s:mp){
   
   if(s.second%2){
ch=s.first;
    oddCount++;
   }
 }

 //cout<<oddCount<<"This is oddCount"<<endl;


 if((s.size()%2==0 and oddCount>0) or oddCount>1){
    cout<<"NO SOLUTION"<<endl;
 }

 else{

string res="";

for(auto x:mp){


    for(int i=0;i<x.second/2;i++) res+=x.first;


}
cout<<res;

if(s.size()%2)
cout<<ch;

reverse(res.begin(),res.end());
cout<<res;
cout<<endl;

 }


}