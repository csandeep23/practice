#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

int knapsack (int total,unordered_set<int> coins) {
    int count=0;
    if (total==0) return 1;
    if (coins.size()==0) return 0;
    else {
        if (total-(*coins.begin())>=0) {
            count=knapsack(total-(*coins.begin()),coins);
            coins.erase(*coins.begin());
            count+=knapsack(total,coins);
        } else {
            coins.erase(*coins.begin());
            count=knapsack(total,coins);
        }
    }
    return count;
}

int main() {
    unordered_set<int> coins = {1,5,10,25};
    int total = 15;
    cout << "The total ways are: " << knapsack(total,coins) << endl;
    return 0;
}
