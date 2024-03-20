#define print(arr,n) for(int i=0;i<n;i++){cout<<arr[i]<<" ";} cout<<endl;

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *left=NULL;
	Node *right=NULL;
	Node(int x){
		this->data=x;
	}
};

// bst

Node *insertnode(Node *root,int x){
	if(!root) return new Node(x);
	if(root->data<x) root->right= insertnode(root->right,x);
	else root->left=insertnode(root->left,x);
	return root;
}

//bt

// Node* insertnode(Node* root, int x, queue<Node*>& q) {
//     Node* temp = new Node(x);
//     Node* curr = q.front();
//     if (!root) root = temp;

//     else if (!curr->left) {
//         curr->left = temp;
//     }
//     else {
//     	if(x==-1) curr->right=NULL;
//     	else
//         curr->right = temp;
//         q.pop();
//     }
//     if(x!=-1)
//     q.push(temp);
//     return root;
// }
void levelorder(Node *root,int x){
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	int count=1;
	while(!q.empty()){
		Node *curr=q.front();
		q.pop();
		if(curr==NULL){
			count++;
			cout<<endl;
			if(!q.empty()) q.push(NULL);
		}
		else{
			 if(curr->data!=-1)
			cout<<curr->data<<" ";
			if(curr->left)q.push(curr->left);
			if(curr->right) q.push(curr->right);
		}
	}
	return;
}
int height(Node *root){
	if(!root) return 0;
	int l=height(root->left);
	int r=height(root->right);
	return max(l,r)+1;
}
int diameater(Node *root,int& dia){
	if(!root) return 0;
	int l=diameater(root->left,dia);
	int r=diameater(root->right,dia);
	dia=l+r;
	return max(l,r)+1;
}

int main(){
	// vector<int> arr={1,3,7,-1,-1,11,5,-1,-1,17,-1,-1,-1};
	vector<int> arr={50,20,3,40,5,60,7,80};
	Node *root=NULL;
	queue<Node *> q;
	for(int i=0;i<arr.size();i++){
		root=insertnode(root,arr[i]);
	}
	cout<<height(root)<<endl;
	int dia=0;
	diameater(root,dia);
	cout<<dia<<endl;
	cout<<endl;
	levelorder(root,3);
	
}