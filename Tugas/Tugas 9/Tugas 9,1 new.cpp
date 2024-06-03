#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* kiri;
    Node* kanan;
    
    Node(int value) : data(value), kiri(NULL), kanan(NULL) {}
};

void preOrder(Node* node) {
    if (node == NULL) {
        return;
    }
    cout << node->data << " ";
    preOrder(node->kiri);
    preOrder(node->kanan);
}

void inOrder(Node* node) {
    if (node == NULL) {
        return;
    }
    inOrder(node->kiri);
    cout << node->data << " ";
    inOrder(node->kanan);
}

void postOrder(Node* node) {
    if (node == NULL) {
        return;
    }
    postOrder(node->kiri);
    postOrder(node->kanan);
    cout << node->data << " ";
}

int main() {
    Node* root = new Node(18);
    root->kiri = new Node(30);
    root->kanan = new Node(33);
    root->kiri->kiri = new Node(29);
    root->kiri->kanan = new Node(32);
    
    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;
    
    cout << "In-order traversal: ";
    inOrder(root);
    cout << endl;
    
    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;
    
    return 0;
}
