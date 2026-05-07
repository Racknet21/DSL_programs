#include <iostream>
using namespace std;

#define MAX 3

struct BTreeNode {
    int keys[MAX];
    BTreeNode* child[MAX + 1];
    int n;
    bool leaf;
};

BTreeNode* createNode(bool leaf) {
    BTreeNode* node = new BTreeNode;
    node->leaf = leaf;
    node->n = 0;
    for (int i = 0; i < MAX + 1; i++)
        node->child[i] = NULL;
    return node;
}

void traverse(BTreeNode* root) {
    if (!root) return;

    int i;
    for (i = 0; i < root->n; i++) {
        if (!root->leaf)
            traverse(root->child[i]);
        cout << root->keys[i] << " ";
    }

    if (!root->leaf)
        traverse(root->child[i]);
}


void insertSimple(BTreeNode* root, int key) {
    int i = root->n - 1;

    if (root->leaf) {
        while (i >= 0 && key < root->keys[i]) {
            root->keys[i + 1] = root->keys[i];
            i--;
        }
        root->keys[i + 1] = key;
        root->n++;
    }
}

int main() {
    BTreeNode* root = createNode(true);

    insertSimple(root, 10);
    insertSimple(root, 20);
    insertSimple(root, 5);

    cout << "B-Tree traversal: ";
    traverse(root);
}