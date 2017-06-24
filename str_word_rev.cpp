#include<iostream>
#include<string>
using namespace std;

string reverseWords(string s) {
    //reverse(s.begin(),s.end());
    string::iterator a,b,e;
    a=b=s.begin();
    e=s.end();
    while (a!=e){
        if(*a!=' '){
            b=a;
            while((*b!=' ')&&(b!=e)) b++;
            reverse(a,b);
            if(b==e) return s;
            a=b;
        }
        a++;
    }
    return s;
}

int main() {
    string sample="Let's practice coding";
    cout << reverseWords(sample) << endl;
    return 0;
}
