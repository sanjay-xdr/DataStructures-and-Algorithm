#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    int age;
    string gender;
    int weight;

public:
    void Speaking()
    {
        cout << "Human Speaks" << endl;
    }
};

class Male : public Human
{
};

class Baby : public Male
{
};
int main()
{
    Baby b1;
    b1.Speaking();
    cout << b1.weight << endl;
}