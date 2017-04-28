#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int i,j=0,s=1;
        vector<int> minnum;
        vector<int>::iterator it,ip;
        minnum.assign(nums.size(),-1);
        minnum[0]=0;
        for(it=nums.begin();it<nums.end();it++){
            for(i=1;i<=(*it);i++){
                s=minnum[j]+1;
                if(((s<minnum[i+j])||(minnum[i+j]<0))&&((i+j)<nums.size())){
                    minnum[i+j]=s;
                }
            }
            j++;
            s++;
        }
        for(it=minnum.begin();it<minnum.end();it++){
            cout << (*it) << "," ;
        }
        cout<<endl;
        return minnum[nums.size()-1];
    }
};

int main(){
    vector<int> inputs = {1,2,6,3,1,4,2,4,6,3,2,4,1,1,2,2,1};
    Solution *s;
    s=new Solution();
    cout << "The minimum number of steps are " << s->jump(inputs) << endl;
    return 0;
}


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j,len,x,y;
        vector<vector<int>> copy;
        copy=matrix;
        len=matrix.size();
        x=y=len-1;
        for(i=0;i<len;i++){
            for(j=0;j<len;j++){
                copy[y][x]=matrix[i][j];
                y--;
            }
            y=len-1;
            x--;
        }
    }
};
