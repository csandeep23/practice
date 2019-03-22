#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
    int data;
    bool parsed;
    vector<Node*> adjecent;

    Node* bfsearch(Node*,int);
    Node(int);
};

Node::Node(int n){
    data=n;
    parsed=false;
}

Node* Node::bfsearch(Node* head,int n){
    return head;
}

int main() {
    Node *list = new Node(2);
    Node *ret;

    ret=list->bfsearch(list,2);
    
    return 0;
}
