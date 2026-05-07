#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


Node* insertBegin(Node* head, int val) {
    Node* newNode = new Node{val, head};
    return newNode;
}


Node* insertEnd(Node* head, int val) {
    Node* newNode = new Node{val, NULL};
    if (!head) return newNode;

    Node* temp = head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    return head;
}


Node* deleteBegin(Node* head) {
    if (!head) return NULL;

    Node* temp = head;
    head = head->next;
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
    while (temp->next->next)
        temp = temp->next;

    delete temp->next;
    temp->next = NULL;
    return head;
}


void display(Node* head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}