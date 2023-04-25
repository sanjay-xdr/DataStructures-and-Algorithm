#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    int age;
    string gender;
    int weight;

public:
    void HumanPower()
    {
        cout << "Human Powers" << endl;
    }
};

class Devil
{
public:
    int age;
    string gender;
    int weight;

public:
    void DevilPower()
    {
        cout << "Devil Powers" << endl;
    }
};

class Male : public Human, public Devil
{
};
int main()
{
    Male m1;
    m1.HumanPower();
    m1.DevilPower();

    //this is ambigous
    // cout << m1.weight << endl;
}