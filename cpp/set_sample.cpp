#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_multiset<int> test;
    for(int i=0;i<5;i++){
        test.insert(i*14);
    }
    test.insert(32);
    test.insert(32);
    for(unordered_multiset<int>::iterator it=test.begin();it!=test.end();it++){
        cout << *it << endl;
    }
}
