#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

  vector<int> nums;

 for (int i = 0; i < 5; i++)
  {
    cout << "Enter the value" << endl;
    int value;
    cin >> value;
    nums.push_back(value);
  }

  cout<<nums[-1]<<"THis is at the -1"<<endl;

}