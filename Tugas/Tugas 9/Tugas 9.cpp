#include<iostream>

using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node *root = NULL;

void addNode(node **root, int value) {
    if ((*root) == NULL) {
        *root = new node;
        (*root)->data = value;
        (*root)->left = NULL;
        (*root)->right = NULL;
    } else {
        if (value < (*root)->data) {
            addNode(&((*root)->left), value);
        } else {
            addNode(&((*root)->right), value);
        }
    }
}

void preOrder(node *root) {
    if (root != NULL) {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(node *root) {
    if (root != NULL) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

void postOrder(node *root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    int numbers[] = {12, 16, 20, 24, 32};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < n; ++i) {
        addNode(&root, numbers[i]);
    }

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

