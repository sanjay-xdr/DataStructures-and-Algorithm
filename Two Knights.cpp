#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{


    ll n;
    cin>>n;

    for(ll i=1;i<=n;i++){

       

        ll totalMoves=(i*i)*(i*i-1)/2;
        ll cancelMoves=2*(2*(i-1)*(i-2)); //careful here (horizontal box and vertical box)
        cout<<totalMoves-cancelMoves<<endl;
    }
}
