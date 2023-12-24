#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n;
    cin >> n;

    if(n==1){
        cout<<1<<endl;
        return 0;
    }

    if(n<=3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    vector<long long> even;
    vector<long long> odd;

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
            even.push_back(i);
        else
            odd.push_back(i);
    }

    for (auto s : even)
        cout << s << " ";
    for (auto s : odd)
        cout << s << " ";
}