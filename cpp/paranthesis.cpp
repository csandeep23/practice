#include<iostream>
using namespace std;

int power(int a,int b) {
    int ret=1;
    while (b>0){
        ret*=a;
        b--;
    }
    return ret;
}

int main(){
    int n=4,y=0;
    int i,j,x,count;
    bool value[n];
    i=power(2,n);
    for(j=0;j<i;j++){
        cout<<j<<endl;
        x=j;
        while(x>0){
            value[y++]=x%2;
            x/=2;
            cout << value[y-1];
            /*switch(value[y-1]){
            case 0:
                cout << ")";    
            case 1:
                cout << "(";
            
            }
            */
        }
        cout << endl;
        y=0;
    }
    return 0;
}
