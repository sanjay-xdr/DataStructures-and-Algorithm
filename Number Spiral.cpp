#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        ll x, y;
        cin >> y >> x;
        ll ans = 0;
        if (y > x)
        {

            if (y % 2 ==1)
            {
                ans = (y - 1) * (y - 1) + 1 + (x - 1);
            }
            else
            {
                ans = y * y - (x - 1);
            }
        }
        else
        {

            if (x % 2 == 0)
                ans = (x - 1) * (x - 1) + 1 + (y - 1);
            else
                ans = x * x - (y - 1);
        }
            cout << ans << " " << endl;
    }


}