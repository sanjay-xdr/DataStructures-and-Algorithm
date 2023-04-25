#include <bits/stdc++.h>
using namespace std;

class Human{
    public:
    int age;
    string gender;
    int weight;
    public:
    void Speaking(){
        cout<<"Human Speaks";
    }
};


class Male : public Human{

};
int main(){
Male m1;
m1.Speaking();
cout<<m1.weight<<endl;
}