#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        int a,b;
        a=conv(num1);
        b=conv(num2);

    }
    int conv(string a){
        int num=0,digit;
        char *p;
        p=&a[0];
        while(*p!='\0'){
            digit=number(*p);
            num=(num+digit)*10;
            p++;
        }
        num/=10;
        return num;
    }
    int number(char x){
        switch(x){
        case '0';
            return 0;
        case '1';
            return 1;
        case '2';
            return 2;
        case '3';
            return 3;
        case '4';
            return 4;
        case '5';
            return 5;
        case '6';
            return 6;
        case '7';
            return 7;
        case '8';
            return 8;
        case '9';
            return 9;
        }
    }
};

int main(){

    return 0;
}
