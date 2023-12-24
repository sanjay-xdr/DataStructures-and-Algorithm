#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            long long diff = v[i] - v[i + 1];
           v[i+1]=v[i];
            sum += diff;
        }
    }

    cout << sum << endl;
}