#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node *next;
    
    Node(int data) {
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val) {

    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node* &head, int val) {
    Node* new_node = new Node(val);

    Node* temp = head;
    while (temp->next!=NULL) {
        temp = temp->next;
    }
    // temp has reached last node
    temp->next = new_node;
}

void insertAtPosition(Node* &head, int val, int pos) {
    if (pos == 0) {
        insertAtHead(head, val);
        return;
    }

    Node* new_node = new Node(val);
    Node *temp = head;
    int curr_pos = 0;
    while (curr_pos!=pos-1) {
        temp=temp->next;
        curr_pos++;
    }

    // temp is pointing to node at pos-1
    new_node->next = temp->next;
    temp->next = new_node;
}

void display(Node *head) {

    Node *temp = head;
    while (temp!=NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void updateAtPosition(Node* &head, int k, int val) {
    Node* temp = head;
    int curr_pos = 0;

    while (curr_pos != k) {
        temp = temp->next;
        curr_pos++;
    }

    // temp will be pointing to kth node
    temp->val = val;
}

void deleteAtHead(Node* &head) {
    Node* temp = head; // node to be deleted
    head = head->next;
    free(temp);
}


int main() {
    Node *head = NULL;
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 1);
    display(head);

    insertAtTail(head, 1);

    display(head);

    insertAtPosition(head, 10, 1);

    display(head);

    updateAtPosition(head, 2, 5);

    display(head);
    return 0;
}