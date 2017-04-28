#include<iostream>
#include<vector>
#include "GameEntry.cpp"
using namespace std;

int main() {
    string name;
    int score,i,n;

    cout << "Enter number of students ";
    cin >> n;
    vector<GameEntry*> ent;
    //vector<int> a;
    //a.push_back(10);
    for(i=0;i<n;i++) {
        ent.push_back(new GameEntry());
        cout << "Enter a name: ";
        cin >> name;
        cout << "Enter the score: ";
        cin >> score;
        ent[i]->setValue(name,score);
    }
    for(i=0;i<n;i++) {
        cout << ent[i]->getName() << " has scored " << ent[i]->getScore() << endl;
    }
    return 0;
}
