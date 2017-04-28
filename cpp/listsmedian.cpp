#include<iostream>

using namespace std;

class box {
    int value;
    int *prev,*next;
};

void insert_val(int val,int *f) {
    box *node,*nodeold,*m1,*m2;
    node = new box;
    node->value=val;
    if (*f==3) {
        node->prev=NULL;
        node->next=NULL;
        m1=node;
        m2=node;
        nodeold=node;
        *f--;
    } else if (*f==2) {
        node->next=nodeold;
        node->prev=NULL;
        nodeold->prev=node;
        m2=m2->prev;
        nodeold=node;
        *f--;
    } else if (*f==1) {
        node->next=nodeold;
        node->prev=NULL;
        nodeold->prev=node;
        m1=m1->prev;
        nodeold=node;
        *f--;
    } else {
        node->next=nodeold;
        node->prev=NULL;
        nodeold->prev=node;
        m2=m2->prev;
        oldnode=node;
        *f++;
    }
}

int main() {
    int a[5]={12,35,53,78,81};
    int b[4]={5,22,41,60};

    int i=j=0;
    int flag=3;
    
    while((i<5)&&(j<4)){
        if(a[i]<b[j]){
            insert_val(a[i],&flag);
            i++;
        } else {
            insert_val(b[j],&flag);
            j++;
        }
    }

    return 0;
}
