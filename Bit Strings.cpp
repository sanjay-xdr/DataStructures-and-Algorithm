#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod ((int)1e9 + 7)
int main()
{

    ll n;
    cin >> n;
ll result=1;

    for(int i=1;i<=n;i++){
result*=2;
if(result>mod)
result%=mod;
    }
cout<<result;
}