#include<iostream>

using namespace std;

int minof(int a,int b,int c){
    if((a<=b)&&(a<=c)){
        return a;
    }else if((b<=c)&&(b<=a)){
        return b;
    }else{
        return c;
    }
}

int find_ugly(int n){
    int i,ugly[n];
    int m2=2,m3=3,m5=5;
    //int i2=0,i3=0,i5=0;
    ugly[0]=1;
    for(i=1;i<=n;i++){
        ugly[i]=minof(m2,m3,m5);
        if(ugly[i]==m2){
            m2+=2;
        }
        if(ugly[i]==m3){
            m3+=3;
        }
        if(ugly[i]==m5){
            m5+=5;
        }
    }
    return ugly[n-1];
}

int main(){
    int result,num;
    cout << "Enter the number: ";
    cin >> num;
    result = find_ugly(num);
    cout << "The ugly number "<<num<<" is " << result << endl;
    return 0;
}
