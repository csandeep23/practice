#include<iostream>
#include<set>
#include<vector>

using namespace std;

void partition(multiset<int> coins,multiset<int> bucket,int subtotal) {
    if(coins.size()!=0 && subtotal>0){
        cout << coins.size() << " " << bucket.size() << " " << subtotal << endl;
        for(int it=0;it<coins.size();it++){
            int size=*coins.begin();
            //cout << "size " << size << endl;
            bucket.insert(*coins.begin());
            subtotal-=*coins.begin();
            coins.erase(*coins.begin());
            partition(coins,bucket,subtotal);
            coins.insert(size);
            bucket.erase(size);
            subtotal+=size;
        }
        //cout << "s" << subtotal << endl;
    } else if (subtotal==0) {
        //Print it
        for(multiset<int>::iterator it=coins.begin();it!=coins.end();it++){
            cout << *it << ",";
        }
        cout << endl;

        for(multiset<int>::iterator it=bucket.begin();it!=bucket.end();it++){
            cout << *it << ",";
        }
        cout << endl;

        cout << endl;
    }
}

int main() {
    multiset<int> coins = {4,5,5,6,3,7,2,8};
    multiset<int> bucket;
    multiset<int>::iterator it;
    int total=0;
    for(it=coins.begin();it!=coins.end();it++){
        total+=*it;
    }
    cout << "The total ways are: " << endl;
    partition(coins,bucket,total/2);
    return 0;
}
