#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
        int i,j,k,r1,r2,r3,max=0,pmax=INT_MAX,rank=1;
        vector<int> nums(5);
        nums[0]=1;
        nums[1]=2;
        nums[2]=3;
        nums[3]=4;
        nums[4]=5;
        vector<string> ranks(nums.size());
        for(i=0;i<nums.size();i++){
            for(j=0;j<nums.size();j++){
                if (nums[j]>max && nums[j]<pmax) {
                    /*if (j<3) {
                        if(j==0){
                            ranks[j]="Gold Medal";
                        } else if(j==1) {
                            ranks[j]="Silver Medal";
                        } else {
                            ranks[j]="Bronze Medal";
                        }
                    } else {*/
                        ranks[j]=to_string(i+1);
                    //}
                    max=nums[j];
                    //cout << j <<" " << max << endl;
                }
                for(k=0;k<nums.size();k++){
                    cout <<"\t"<< ranks[k] << endl;
                }
            }
            pmax=max;
            max=0;
        }   
        for(i=0;i<nums.size();i++){
            cout << ranks[i] << endl;
        }
        return 0;
}
