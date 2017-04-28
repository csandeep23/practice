#include<iostream>

using namespace std;

int lista[15] = {54,2,586,32,68,21,199,8,43,28,95,55,62,102,84};

void merge(int l,int m,int h) {
    int x,i,j,listb[15];
    i=x=l;
    j=m+1;
    while ((i<=m)&&(j<=h)) {
        if(a[i]<a[j]) {
            b[x]=a[i];
            i++;
        } else {
            b[x]=a[j];
            j++;
        }
    }
}

void mergesort(int low, int high) {
    int mid = low + (high-low) / 2;
    cout << low << " " << mid << " " << high << endl;
    if (low != mid) {
        mergesort(low,mid);
    }
    if ((mid+1) != high) {
        mergesort((mid+1),high);
    }
    merge(low,mid,high);
}

int main() {
    int i;
    
    for(i=0;i<15;i++) {
        cout << lista[i] << ",";
    }
    cout << endl;
    mergesort(0,14);
    for(i=0;i<15;i++) {
        cout << lista[i] << ",";
    }
    cout << endl;
    return 0;
}
