#include<iostream>
#include<string>

using namespace std;

class GameEntry {
public:
    GameEntry();
    ~GameEntry();

    void setValue(string n, int s);
    string getName();
    int getScore();
private:
    string name;
    int score;
};
