// Given the head of a linked list, delete every alternate element from the list starting from the second element

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

void deleteAlternateNode(Node* &head) {
    Node* temp = head;
    int n = 0;
    int n1 = 0;
    while (n <= n1) {
        temp -> next = temp -> next -> next;
        n++;
        if (temp->next != NULL) {
            n1++;
        }
    }
}

int main() {
    cout << "hello";
    return 0;
}