#include<iostream>
using namespace std;

class Node{
public:
    int value;
    Node *next;
};

class Solution {
public:
    Node *swapPairs(Node *head) {
        Node *temp,*n1,*n2,*ret,*prev;
        n1=head;
        ret=n1->next;
        while(n1->next!=NULL){
            n2=n1->next;
            if(n2->next!=NULL){
                temp->next=n2->next;
                n2->next=n1;
                n1->next=temp->next;
                prev->next=n2;
                prev=n1;
                n1=n1->next;
            }else{
                prev->next=n2;
                n2->next=n1;
                n1->next=NULL;
            }
        }
        return ret;
    }

    void printList(Node *x) {
        cout << x->value << endl;
        while(x->next!=NULL){
            x=x->next;
            cout << x->value << endl;
        }
    }
};

int main(){
    int i,a[8] = {1,2,3,4,5,6,7,8};
    Node *prev,*n;
    for(i=7;i>=0;i--){
        n = new Node();
        n->value=a[i];
        if(i==7){
            n->next=NULL;
        } else {
            n->next=prev;
        }
        prev=n;
    }

    Solution s;
    s.printList(n);
    n=s.swapPairs(n);
    s.printList(n);

    return 0;
}
