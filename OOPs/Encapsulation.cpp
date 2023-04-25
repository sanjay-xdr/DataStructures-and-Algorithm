#include <bits/stdc++.h>
using namespace std;
// Encapsulation
//Here the data members can only be accessed by the getter and setter methods
class Game
{
private:
    string userName;
    int score;

public:
    Game(string userName, int score)
    {
        this->userName = userName;
        this->score = score;
    }
    string getName()
    {
        return userName;
    }
    int getScore()
    {
        return score;
    }
    void setName(string name)
    {
        userName = name;
    }
    void setScore(int score)
    {
        this->score = score;
    }
};

int main()
{

    Game Game1("sanjay", 12);
       cout << Game1.getName() << endl;
    // cout << Game1.userName << endl;
    // cout << Game1.score << endl;

    Game1.setName("Sanjayagain");
    cout << Game1.getName() << endl;

    Game1.setScore(21);
    cout << Game1.getScore() << endl;
}