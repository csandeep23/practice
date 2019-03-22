#include<iostream>
#include<vector>

using namespace std;

int numPoss(int total,vector<int> coins) {
    if (coins.size()==0) return 0;
    else if (total-coins.front()<0){
        coins.pop();
        return 0;
    } else if (total-coins.front>0) return numPoss(total-coins.front(),coins)+numPoss(total,coins.pop());
    else return 1;
}

int main() {
    int tot;
    vector<int> coins = {1,5,10,25};
    cout << "Enter the amount in cents: ";
    cin >> tot;
    cout << "The possible returns are " << numPoss(tot,coins) << endl;
    return 0;
}
