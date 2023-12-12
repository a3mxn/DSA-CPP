#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

class FullBinaryTree {
private:
    Node* root;

    // Helper function to create nodes in a full binary tree
    Node* createNode(int value) {
        return new Node(value);
    }

public:
    FullBinaryTree() : root(nullptr) {
        constructTree();
    }

    void constructTree() {
        root = createNode(1);
        root->left = createNode(2);
        root->right = createNode(3);
        root->left->left = createNode(4);
        root->left->right = createNode(5);
        root->right->left = createNode(6);
        root->right->right = createNode(7);
    }

    // Method to print the tree (inorder traversal)
    void inorderTraversal(Node* node) {
        if (node == nullptr) return;
        inorderTraversal(node->left);
        std::cout << node->data << " ";
        inorderTraversal(node->right);
    }

    void printTree() {
        std::cout << "Inorder Traversal: ";
        inorderTraversal(root);
        std::cout << std::endl;
    }
};

int main() {
    FullBinaryTree tree;
    tree.printTree();
    return 0;
}
