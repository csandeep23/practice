#include<iostream>
#include<set>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;

void adding_numbers(int& a,int& b, int& c) {
    c=a+b;
}

void reverseString (string& teststr) {
    int p=teststr.length()-1;
    char tmp;
    for(int i=0;i<teststr.length()/2;i++){
        tmp=teststr[p];
        teststr[p]=teststr[i];
        teststr[i]=tmp;
        p--;
    }
}

void reverseSentence(string& srev) {
    char pt;
    string word="",ret="";
    for(pt=0;pt<=srev.length();pt++){
        if(srev[pt]==' ' || srev[pt]=='\0'){
            ret=word+" "+ret;
            word="";
        } else {
            word+=srev[pt];
        }
    }
    srev=ret;
}

int numberofways(int total,vector<int> coins){
    vector<int> coinsnew=coins;
    coinsnew.erase(coins.begin());
    if (coinsnew.size()>0 && (total-*(coins.begin()))>0) {
        return numberofways(total,coinsnew)+numberofways(total-*(coins.begin()),coins);
    } else if (coinsnew.size()>0) {
        // Number of ways with no 1c + Number of ways with atleast 1 1c
        return numberofways(total,coinsnew);
    } else if (total-*(coins.begin())>0) {
        return numberofways(total-*(coins.begin()),coins);
    } else if (total-*(coins.begin())==0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    vector<int> coins;
    coins.push_back(1);
    coins.push_back(5);
    coins.push_back(10);
    coins.push_back(25);
    int numways=numberofways(100,coins);
    cout << numways << endl;


    /*
    int q=34,w=44,e=33;
    adding_numbers(q,w,e);
    cout << "The value of e is " << e << endl;

    string teststr = "peednaS";
    cout << teststr << endl;
    reverseString(teststr);
    cout << teststr << endl;
    
    string sent="This is a sample sentence";
    cout << sent << endl;
    reverseSentence(sent);
    cout << sent << endl;


    /////////////////////////
    // Vector  
    /////////////////////////
    int temp,a=1,b=1,len=10;
    vector<int> fib;
    fib.push_back(a);
    fib.push_back(b);
    while (fib.size()<10) {
        temp=a+b;
        a=b;
        b=temp;
        fib.push_back(temp);
    }

    cout << "The fibonacci series is: " << endl;
    for(vector<int>::iterator it=fib.begin();it!=fib.end();it++) {
        cout << (*it) << ",";
    }
    cout << "..." << endl;
    
    /////////////////////////
    // Pair
    /////////////////////////
    pair<int,int> pairvar;
    pairvar=make_pair(10,20);
    pairvar=make_pair(pairvar.first,pairvar.second*2);
    cout << "The pair contains " << pairvar.first << " and " << pairvar.second << endl;

    /////////////////////////
    // Map
    /////////////////////////
    map<int,string> id2;
    map<int,string>::iterator it2;

    id2.insert(make_pair(1,"sandeep"));
    id2.insert(make_pair(2,"megha"));
    id2.insert(make_pair(3,"priya"));

    for(it2=id2.begin();it2!=id2.end();it2++){
        cout << "Index no." << (*it2).first << "; Name is " << (*it2).second << endl;
    }

    id2.erase(id2.find(2));

    for(it2=id2.begin();it2!=id2.end();it2++){
        cout << "Index no." << (*it2).first << "; Name is " << (*it2).second << endl;
    }

    cout << "Size of the map is " << id2.size() << endl;

    /////////////////////////
    // Unordered Map
    /////////////////////////
    unordered_map<int,string> idn;
    unordered_map<int,string>::iterator it1;

    idn.insert(make_pair(1,"sandeep"));
    idn.insert(make_pair(2,"megha"));
    idn.insert(make_pair(3,"priya"));

    for(it1=idn.begin();it1!=idn.end();it1++){
        cout << " Index no." << it1->first << "; Name is " << it1->second << endl;
    }
    cout << "Size of the map is " << idn.size() << endl;

    /////////////////////////
    // Set
    /////////////////////////
    set<int> list1;
    set<int>::iterator it;
    
    list1.insert(23);
    list1.insert(10);
    list1.insert(19);
    list1.insert(87);
    
    
    cout << "size is " << list1.size() << endl;
    
    it=list1.find(19);
    
    list1.erase(it);
    list1.erase(10);

    for(it=list1.begin();it!=list1.end();it++){
        cout << &(*it) << " " << *it << endl;
    }
    cout << "Size of the set is " << list1.size() << endl;
    */

}
