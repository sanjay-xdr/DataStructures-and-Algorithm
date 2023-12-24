#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod ((int)1e9 + 7)
int main()
{

    ll n;
    cin >> n;

    while (n--)
    {

        ll a, b;
        cin >> a >> b;

        if ((2 * a - b) >= 0 && (2 * a - b) % 3 == 0 && (2 * b - a) >= 0 && (2 * b - a) % 3 == 0)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}