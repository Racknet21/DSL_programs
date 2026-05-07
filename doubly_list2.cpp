#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};


Node* insertBegin(Node* head, int val) {
    Node* newNode = new Node{val, NULL, head};

    if (head)
        head->prev = newNode;

    return newNode;
}


Node* insertEnd(Node* head, int val) {
    Node* newNode = new Node{val, NULL, NULL};

    if (!head) return newNode;

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}


Node* deleteBegin(Node* head) {
    if (!head) return NULL;

    Node* temp = head;
    head = head->next;

    if (head)
        head->prev = NULL;

    delete temp;
    return head;
}


Node* deleteEnd(Node* head) {
    if (!head) return NULL;

    if (!head->next) {
        delete head;
        return NULL;
    }

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->prev->next = NULL;
    delete temp;

    return head;
}


void display(Node* head) {
    while (head) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL\n";
}