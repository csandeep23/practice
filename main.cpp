#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

/*
mutex mt;

void printinfo(int n, char c) {
    mt.lock();
    for(int i=0;i<n;i++) {
        cout << c;
    }
    cout << endl;
    mt.unlock();
}
*/

int main() {
    // printinfo(50,'p');
    // thread t1 (printinfo,50,'p');
    // thread t2 (printinfo,50,'r');
    cout << "test" << endl;
    // t1.join();
    cout << "test3" << endl;
    // t2.join();
    cout << "test2" << endl;
    return 0;
}