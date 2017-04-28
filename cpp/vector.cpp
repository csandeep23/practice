#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<int> sample;
    //sample={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<int>::iterator it;
    sample.push_back(234);
    sample.push_back(356);
    sample.push_back(2323);
    sample.push_back(754);
    for(it=sample.begin();it<sample.end();it++){
        cout << *(it) << endl;
    }
    it=sample.begin()+2;
    cout << sample.size() << endl;
    sample.insert(it,3,3);
    cout << sample.capacity() << endl;
    for(it=sample.begin();it<sample.end();it++){
        cout << *(it) << endl;
    }
    it=sample.begin();
    sample.erase(it);
    for(it=sample.begin();it<sample.end();it++){
        cout << *(it) << endl;
    }

    return 0;
}
