#include<iostream>
#include<vector>

using namespace std;

void merge (vector<int>& lista,int low,int mid,int high) {
    vector<int> listb;
    int i=low,j=mid+1,k=0;
    while(low<=mid && j<=high) {
        if(lista[low]<lista[j]) {
            listb.push_back(lista[low]);
            low++;
        } else {
            listb.push_back(lista[j]);
            j++;
        }
    }
    while(low<=mid){
        listb.push_back(lista[low]);
        low++;
    }
    while(j<=high){
        listb.push_back(lista[j]);
        j++;
    }
    while(i<=high){
        lista[i]=listb[k];
        i++;
        k++;
    }
}

void mergesort (vector<int>& lista, int low, int high) {
    if (low<high) {
        int mid=(low+high)/2;
        mergesort(lista,low,mid);
        mergesort(lista,mid+1,high);
        merge(lista,low,mid,high);
    }
}

int main() {
    vector<int> lista = {54,2,586,32,68,21,199,8,43,28,95,55,62,102,84};
    for(int i=0;i<lista.size();i++){
        cout << lista[i] << ",";
    }
    cout << endl;

    mergesort(lista,0,lista.size()-1);

    for(int i=0;i<lista.size();i++){
        cout << lista[i] << ",";
    }
    cout << endl;
    return 0;
}
