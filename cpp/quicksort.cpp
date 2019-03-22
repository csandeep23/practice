#include<iostream>
#include<vector>

using namespace std;

void quicksort (vector<int>& lista, int low, int high) {
    int i=low,j=high;
    int temp,pivot=lista[(low+high)/2];
    while(i<=j){
        while(lista[i]<pivot){
            i++;
        }
        while(lista[j]>pivot){
            j--;
        }
        if(i<=j){
            temp=lista[i];
            lista[i]=lista[j];
            lista[j]=temp;
            i++;
            j--;
        }
    }
    if(low<j) quicksort(lista,low,j);
    if(i<high) quicksort(lista,i,high);
}

int main() {
    vector<int> lista = {54,2,586,32,68,21,199,8,43,28,95,55,62,102,84};
    for(int i=0;i<lista.size();i++){
        cout << lista[i] << ",";
    }
    cout << endl;

    quicksort(lista,0,lista.size()-1);

    for(int i=0;i<lista.size();i++){
        cout << lista[i] << ",";
    }
    cout << endl;
    return 0;
}
