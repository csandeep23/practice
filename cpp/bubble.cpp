#include<iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp;

    cout << "*a - " << *a << "\n*b - " << *b << endl;
    temp=*a;
    *a=*b;
    *b=temp;
}

void bubble_sort(int *p,int cnt) {
    int i,j;
    for(i=0;i<(cnt-1);i++){
        for(j=i;j<cnt;j++) {
            if (*(p+i)>*(p+j)) {
                swap(p+i,p+j);
            }
        }
    }
}

int main() {
    int i,count;
    int *ptr;

    cout << "Enter the array size" << endl;
    cin >> count;
    ptr=new int[count];

    for(i=0;i<count;i++) {
        cout << "Number " << i << ": ";
        cin >> *(ptr+i);
    }

    bubble_sort(ptr,count);

    for(i=0;i<count;i++) {
        cout << "i[" << i+1 << "] - " << ptr[i] << endl; 
    }



    return 0;
}
