#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod ((int)1e9 + 7)
int main(){


    ll n = 0;

    cin >> n;

    ll sum = 0;

    while (n > 0)

    {

        sum = sum + (n / 5);

        n = n / 5;

    }

    cout << sum;
}