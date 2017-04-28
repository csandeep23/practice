#include<iostream>

using namespace std;

void func1(int a) {
    a=15;
}

void func2(int *a) {
    *a=20;
}

void func3(int &a) {
    a=25;
}

int main() {
    int a=10;
    int *i;
    i=&a;
    func1(a);
    cout << "a " << a << endl;
    func2(&a);
    cout << "a " << a << endl;
    func3(a);
    cout << "a " << a << endl;
	return 0;
}
