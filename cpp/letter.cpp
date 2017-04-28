#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> letterCombinations(string digits) {
    vector<string> res;

    string charmap[10] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    res.push_back("");
    for (int i = 0; i < digits.size(); i++)
    {
        cout << "i" << i << endl;
        vector<string> tempres;
        string chars = charmap[digits[i] - '0'];
        for (int c = 0; c < chars.size();c++) {
            cout << "res.size " << res.size() << endl;
            cout << "tres.size " << tempres.size() << endl;
            for (int j = 0; j < res.size();j++)
                tempres.push_back(res[j]+chars[c]);
        }
        res = tempres;
    }
    return res;
}

int main() {
    vector<string> ret;
    ret=letterCombinations("234");

    vector<string>::iterator it;
    for (it = ret.begin(); it != ret.end(); ++it) {
        cout << *it << '\n';
    }

    //cout <<ret<< endl;
    return 0;
}
