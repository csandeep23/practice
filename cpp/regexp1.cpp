#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        bool result=true;
        char *prevchar,*a=&s[0],*b=&p[0];
        int ptr,strs=s.length();
        int strp=p.length();
        while(ptr!=strs){
            cout<<*a;
            if(*a==*b){
                prevchar=a;
                a++;
                b++;
            }else if(*a!=*b){
                if((*b=='*')&&(*a==*prevchar)){
                    b++;
                }
            }
            ptr++;
        }
        return result;
    }
};


int main() {
    string pattern,master;
    master="abcde";
    pattern="abcde";

    Solution s;
    if(s.isMatch(master,pattern)==true){
        cout<<"Match\n";
    }else{
        cout<<"Mismatch\n";
    }

    return 0;
}
