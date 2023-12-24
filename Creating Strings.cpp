#include <bits/stdc++.h>
using namespace std;
#define ll long long

void CreateString(int index, string &s, set <string> &ans)
{

    if (index == (int)(s.size()))
    {
        // cout<<"I am here"<<endl;
        ans.insert(s);
       
    }

    for (int i = index; i < int(s.size()); i++)
    {
        // cout<<"I am not getting here"<<endl;
        swap(s[index], s[i]);
        CreateString(index + 1, s, ans);
        swap(s[index], s[i]);
    }

  
}
int main()
{

    string s;
    cin >> s;
 
     set<string> ans;
    CreateString(0, s, ans);

    // sort(ans.begin(),ans.end());

   

    cout << ans.size() << endl;
    for (auto x : ans)
    {
        cout << x << endl;
    }
}