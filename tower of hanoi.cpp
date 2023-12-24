#include <bits/stdc++.h>
using namespace std;
#define ll long long

void moveDisks(int n, int toRod, int fromRod, vector<vector<int>> &moves){


    if (n == 1)

    {
        moves.push_back({fromRod, toRod});

        //cout<<fromRod <<" "<<toRod<<endl;

        return;
    }

    int rem = 1 ^ 2 ^ 3 ^ toRod ^ fromRod;

    moveDisks(n - 1, rem, fromRod, moves);

    moves.push_back({fromRod, toRod});
        //cout<<fromRod <<" "<<toRod<<endl;

    moveDisks(n - 1, toRod, rem, moves);

}

int main(){

 ll n;
 cin>>n;


    vector<vector<int>> moves;
   moveDisks(n, 3, 1, moves);
 
cout<<moves.size()<<endl;
 for (const auto& innerVector : moves) {
        // Iterate through the inner vector
        for (int value : innerVector) {
            cout << value << " ";
        }
        cout<<endl;

}

}