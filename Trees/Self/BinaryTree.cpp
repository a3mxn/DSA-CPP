#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        left=NULL;
        right=NULL;
    }
};

int main(){
    Node* root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);

}