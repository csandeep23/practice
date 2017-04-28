#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        char *ptr;
        string seed = "1";
        ptr=&seed[0];

    }
};

int main(){
    int n;
    Solution *s;
    s=new Solution();
    cout << "Enter the number: ";
    cin >> n;
    cout << s.countAndSay(n) << endl;
    return 0;
}
