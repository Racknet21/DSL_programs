#include <iostream>
using namespace std;

#define ORDER 3

struct Node {
    int keys[ORDER];
    Node* children[ORDER + 1];
    bool isLeaf;
    int n;
    Node* next;
};

Node* createNode(bool leaf) {
    Node* node = new Node;
    node->isLeaf = leaf;
    node->n = 0;
    node->next = NULL;

    for (int i = 0; i < ORDER + 1; i++)
        node->children[i] = NULL;

    return node;
}


void insertLeaf(Node* root, int key) {
    int i = root->n - 1;

    while (i >= 0 && root->keys[i] > key) {
        root->keys[i + 1] = root->keys[i];
        i--;
    }

    root->keys[i + 1] = key;
    root->n++;
}

void display(Node* root) {
    for (int i = 0; i < root->n; i++)
        cout << root->keys[i] << " ";
}

int main() {
    Node* root = createNode(true);

    insertLeaf(root, 10);
    insertLeaf(root, 20);
    insertLeaf(root, 5);

    cout << "B+ Tree (Leaf nodes): ";
    display(root);
}