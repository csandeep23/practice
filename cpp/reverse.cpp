#include<iostream>

using namespace std;

int main() {
    int num,outnum;
    cout << "Enter a number\n";
    cin >> num;
    while(num>0){
        outnum*=10;
        outnum+=(num%10);
        num/=10;
    }
    cout<<outnum<<endl;

    return 0;
}
