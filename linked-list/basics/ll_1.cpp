#include<iostream>
using namespace std;


//To create a linked list
class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL; 
    }
};

void traverseReverse(Node* head) {
    Node* temp = head;
    if (head == NULL) return;
    traverseReverse(head -> next);
    cout << head -> data << " -> ";
}

void deleteAlternateNode(Node* &head) {
    Node* temp = head;
    int n = 0;
    int n1 = 0;
    while (n <= n1) {
        temp -> next = temp -> next -> next;
        temp = temp -> next;
        n++;
        if (temp->next != NULL) {
            n1++;
        }
    }
}


// To insert a value in front of a given linked list
void insertAtHead(Node* &head, int data) {
    // create new node
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

// To insert a value at the end of a given linked list
void insertAtTail(Node* &head, int data) {
    Node* last = new Node(data);
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp -> next;
    }
    temp -> next = last;
}

void insertAtPosition(Node* head, int pos, int val) {
    Node* temp = head;
    Node* new_node = new Node(val);
    int ptr = 0;
    while (ptr != pos-1) {
        temp = temp->next;
        ptr++;
    }
    new_node -> next = temp -> next;
    temp -> next = new_node;
}

void updateAtPosition(Node* head, int pos, int val) {
    Node* temp = head;
    int p1 = 0;
    while (p1 != pos) {
        temp = temp -> next;
        p1++;
    }

    temp->data = val;
}

void deleteAtHead(Node* &head) {
    Node* temp = head; // node to be deleted
    head = head -> next;
    free(temp);
}

void deleteAtTail(Node* &head) {
    Node* second_last = head;
    while (second_last -> next -> next != NULL) {
        second_last = second_last -> next;
    }

    // now temp is pointing to the second last node
    Node* temp = second_last -> next;
    second_last -> next = NULL;
    free(temp);
}

void deleteAtPosition(Node* &head, int pos) {
    Node* temp = head;
    int p = 0;
    while (p != pos-1) {
        p++;
        temp = temp -> next;
    }
    // Now temp is pointing to one before node of the node to be deleted
    Node* delNode = temp->next;
    temp->next = temp->next->next;
    free(delNode);
}


// Print all the values in linked list
void traverse(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL";
    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
    
    traverse(node1);

    insertAtHead(node1, 12);
    traverse(node1);

    insertAtHead(node1, 15);
    traverse(node1);

    insertAtTail(node1, 99);
    traverse(node1);

    updateAtPosition(node1, 2, 85);
    traverse(node1);

    insertAtPosition(node1, 2, 101);
    traverse(node1);

    // deleteAtHead(node1);
    // traverse(node1);

    // deleteAtTail(node1);
    // traverse(node1);

    // deleteAtPosition(node1, 1);
    // traverse(node1);

    deleteAlternateNode(node1);

    traverse(node1);
    
    traverseReverse(node1);

    return 0;
}