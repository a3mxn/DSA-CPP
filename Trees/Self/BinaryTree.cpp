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

Node* buildtree(Node* root){

    int data;
    // cout<<"Entre node data : "<<endl;
    cin>>data;
    if(data==-1) return NULL;
    root=new Node(data);


    // cout<<"Enter to left of "<<data<<endl;
    root->left=buildtree(root->left);
    // cout<<"Enter to right of "<<data<<endl;
    root->right=buildtree(root->right);
    return root;
}

Node* insertnode(Node* root, int x, queue<Node*>& q) {
    Node* newnode = new Node(x);
    Node* curr = q.front();
    if (!root) root = newnode;

    else if (!curr->left) {
    	if(x==-1) curr->left=NULL;
    	else
        curr->left = newnode;
    }
    else {
    	if(x==-1) curr->right=NULL;
    	else
        curr->right = newnode;
        q.pop();
    }
    if(x!=-1)
    q.push(newnode);
    return root;
}

void solve(Node* root){
    if(root==NULL) return;

    solve(root->left);
    cout<<root->data<<" ";
    solve(root->right);
    // cout<<root->data<<" ";

}

void levelorder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    // cout<<" sa  "<<q.front()<<"  "<<endl;
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }
}

void printLeafNodes(Node* root){
        cout<<root->data<<" ";
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        return;
    }
    // printLeafNodes(root->left);
    printLeafNodes(root->right);
}

int main(){
    // Node* root = new Node(5);
    // root->left = new Node(6);
    // root->right = new Node(7);

    // Node* abc = NULL;
    // abc=buildtree(abc);
    Node* root = NULL;
    root = buildtree(root);
    // cout<<endl<<endl;
    levelorder(root);
    // cout<<endl<<endl;
    // solve(root);
    cout<<endl<<"hi"<<endl;

    // printLeafNodes(root);
    Node* temp=NULL; 
    temp = buildtree(temp);
    levelorder(temp);
    // cout<<endl<<"bye"<<endl;
    // levelorder(abc);

}