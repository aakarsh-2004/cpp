// Given the head of a singly linked list print the reverse order

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

Node* reverseLinkedList(Node* &head) {
    Node* prev_ptr = NULL;
    Node* curr_ptr = head;
    
    // currptr -> next = prevptr;
    // move all 3 ptrs by one step ahead
    while (curr_ptr != NULL) {
        Node* nextptr = curr_ptr ->next;
        curr_ptr -> next = prev_ptr;
        prev_ptr = curr_ptr;
        curr_ptr = nextptr;
    }

    // When this loop ends, prevptr pointing to my last node which is new head
    Node* new_head = prev_ptr;
    return new_head;
}

void insertAtHead(Node* &head, int data) {
    Node* new_node = new Node(data);
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
    Node* head = new Node(10);

    insertAtHead(head, 20);
    insertAtHead(head, 30);

    traverse(head);

    head = reverseLinkedList(head);
    traverse(head);
    return 0;
}