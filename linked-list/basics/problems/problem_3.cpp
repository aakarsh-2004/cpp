// Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node (int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

void deleteDuplicates(Node* &head) {
    Node* temp = head;
    while (temp -> next != NULL) {
        if (temp -> next -> data == temp -> data) {
            Node* duplicate = temp -> next;
            temp -> next = temp -> next -> next;
            delete duplicate;
        } else {
            temp = temp -> next;
        }
    }
}

void insertAtHead(Node* &head, int val) {
    Node* new_node = new Node(val);
    new_node -> next = head;
    head = new_node;
}

void traverse(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* node1 = new Node(10);

    insertAtHead(node1, 20);
    insertAtHead(node1, 20);
    insertAtHead(node1, 20);
    
    deleteDuplicates(node1);
    traverse(node1);
    return 0;
}