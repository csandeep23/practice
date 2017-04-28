#include<iostream>
using namespace std;

int main(){
    string a[10],result;
    a[0]="";
    a[1]="";
    a[2]="abc";
    a[3]="def";
    a[4]="ghi";
    a[5]="jkl";
    a[6]="mno";
    a[7]="pqr";
    a[8]="stuv";
    a[9]="wxyz";
    int i,num,digit;
    char *x;

    cout << "Enter the number: ";
    cin >> num;
    i=num; 
    while(i>0){
        digit=i%10;
        x=&a[digit][0];
        while(*x!='\0'){
            x++;
        }

        i/=10;
    }

    return 0;
}
