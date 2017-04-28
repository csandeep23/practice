#include<iostream>
#include<string>

#include "GameEntry.h"

using namespace std;

GameEntry::GameEntry(){
}

GameEntry::~GameEntry(){
}

void GameEntry::setValue(string n, int s) {
    name = n;
    score = s; 
}

int GameEntry::getScore(){
    return score;
}

string GameEntry::getName(){
    return name;
}
