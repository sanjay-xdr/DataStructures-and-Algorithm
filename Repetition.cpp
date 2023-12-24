#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    long long n = s.size();
    long long start = 0;
    long long second = 0;
    long long maxCount = 1;
    long long count = 0;

    while (n >= second)
    {
        if (s[start] == s[second])
        {
            count++;
            second++;
        }
        maxCount = max(maxCount, count);
        if (s[start] != s[second])
        {

          
            start = second;
            count = 0;
        }
      
    }
    cout << maxCount << " ";
}