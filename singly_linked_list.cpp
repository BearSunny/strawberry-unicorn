#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insertNode(Node*& head, int num) {
    Node* newNode = new Node;
    newNode -> data = num;
    newNode -> next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* cur = head;
        while (cur -> next != nullptr) {
            cur = cur -> next;
        }
        cur -> next = newNode;
    }
}

void displayLinkedList(Node* head) {
    Node* cur = head;
    while (cur != nullptr) {
        cout << cur -> data << " ";
        cur = cur -> next;
    }
    cout << endl;
}

int main() {
    int n;
    Node* pHead = nullptr;
    cout << "Input integers until 0: ";
    while (true) {
        cin >> n;
        if (n == 0) break;
        insertNode(pHead, n);
    }
    cout << "Linked list: ";
    displayLinkedList(pHead);
}