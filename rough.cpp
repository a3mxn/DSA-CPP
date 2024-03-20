#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* left;
	Node* right;
	Node(int data){
		this->data=data;
		left=NULL;
		right=NULL;
	}
};

Node* build() {
    int data;
    cin >> data;

    // Base case: if the input is -1, return NULL
    if (data == -1) {
        return NULL;
    }

    // Create a new node with the current data
    Node* root = new Node(data);

    // Recursively build the left and right subtrees
    root->left = build();
    root->right = build();

    return root;
}

Node* buildTree(Node* root) {

    // cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    if(data == -1) {
        return NULL;
    }
    root = new Node(data);    

    // cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    // cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}

void levelorder(Node* root){
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		int n = q.size();
		cout<<"n : "<<n<<endl;
		for(int i=0;i<n;i++){
			Node* temp = q.front();
			q.pop();
			cout<<temp->data<<" ";
			if(temp->left) q.push(temp->left);
			if(temp->right) q.push(temp->right);
		}
		cout <<endl;
	}
}

void levelOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();  // Get the number of nodes at the current level

        // Process all nodes at the current level
        for (int i = 0; i < levelSize; i++) {
            Node* current = q.front();
            q.pop();

            cout << current->data << " ";

            if (current->left != NULL) {
                q.push(current->left);
            }

            if (current->right != NULL) {
                q.push(current->right);
            }
        }

        cout << "\n";  // Print a newline after processing each level
    }
}

int main() {
	// your code goes here
	//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
	vector<int> arr={1,3,7,-1,-1,11,-1,-1,5,17,-1,-1,-1};
	// for(int i=0;i<arr.size();i++){
		Node* root = NULL;
		root=buildTree(root);
		// root = build();
	// }

	cout<<endl<<endl;
	levelorder(root);
	// levelOrderTraversal(root);
}
