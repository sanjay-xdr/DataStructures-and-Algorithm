#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    ll n;
    cin >> n;

    ll sum = n * (n + 1) / 2;
    vector<ll> v1;
    vector<ll> v2;
    if (sum % 2 == 0)
    {

        cout << "YES" << endl;

        ll mid = sum / 2;
        for (int i = n; i > 0; i--)
        {
            if (mid >= i)
            {
                v1.push_back(i);
                mid = mid - i;
            }
            else
            {
                v2.push_back(i);
            }
        }

        cout << v1.size() << endl;
        for (auto s : v1)
        {
            cout << s << " ";
        }
        cout << endl;
        cout << v2.size() << endl;
        for (auto s : v2)
        {
            cout << s << " ";
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}