#include<iostream>
using namespace std;
#include<string>
#include<vector>

class Node {
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }

    void printTree(Node* root) {
        if (root == NULL) {
            return;
        }
        cout << root->data << " ";
        printTree(root->left);
        printTree(root->right);
    }
};

static int idx = -1;
Node* buildTree(vector<int> nodes) {
    idx++;
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* currentNode = new Node(nodes[idx]);
    currentNode->left = buildTree(nodes);
    currentNode->right = buildTree(nodes);

    return currentNode;
}

int main() {
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root = buildTree(nodes);
    root->printTree(root);
    return 0;
}
