#include<iostream>
#include<cmath>
#include<string>
#include<unordered_map>


using namespace std;
int main() {
    
    unordered_map<string,int> sample;
    unordered_map<string,int>::iterator s;
    sample["Sandeep"]=23;
    sample["Mandeep"]=25;
    sample["Gandeep"]=43;
    for(s=sample.begin();s!=sample.end();s++){
        cout << s->first << " " << s->second << endl;
    }
    cout << sample.size()<< endl;
    return 0;
}
