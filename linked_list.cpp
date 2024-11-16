#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
};

Node* insertNode(Node*& head, int num) {
    Node* newNode = new Node;
    newNode -> val = num;
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

Node* insertAtBeginning(Node*& head, int num) {
    Node* newNode = new Node;
    newNode -> val = num;
    newNode -> next = head;

    head = newNode;
}

Node* insertAfterK(Node*& head, int num, int key) {
    Node* newNode = new Node;
    newNode -> val = num;

    if (head == nullptr) {
        return nullptr;
    }

    Node* cur = head;
    while (cur != nullptr && cur -> val != key) {
        cur = cur -> next;
    }    

    if (cur != nullptr) {
        // Must assign the next node of newNode first to 
        // preserve the cur -> next
        newNode -> next = cur -> next;
        cur -> next = newNode;
    }
    return head;
}

Node* insertBeforeK(Node*& head, int num, int key) {
    Node* newNode = new Node;
    newNode -> val = num;
    newNode -> next = nullptr;

    if (head == nullptr) {
        return nullptr;
    }

    // Special case: insert at the beginning
    if (head -> val == key) {
        newNode -> next = head;
        head = newNode;
        return head;
    }

    Node* cur = head;
    Node* prev = nullptr;

    while (cur != nullptr && cur -> val != key) {
        prev = cur;
        cur = cur -> next;
    }

    if (cur != nullptr) {
        prev -> next = newNode;
        newNode -> next = cur;
    }
    return head;
}

Node* displayNode(Node*& head) {
    Node* cur = head;
    while (cur != nullptr) {
        cout << cur -> val << " ";
        cur = cur -> next;
    }
    cout << endl;
}

Node* deleteAllNodes(Node*& head) {
    Node* cur = head;
    while (cur != nullptr) {
        Node* temp = cur -> next;
        delete cur;
        cur = temp;
    }
}

int findNodeAtIndex(Node*& head, int index) {
    Node* cur = head;
    int count = 0;
    while (cur != nullptr && count != index) {
        cur = cur -> next;
        count++;
    }

    // Only return when cur != nullptr
    if (cur != nullptr) {
        return cur -> val;
    } else {
        return -1;
    }
}

Node* removeNthFromEnd(Node* head, int N) {
    int length = 0;
    Node* cur = head;

    while (cur != nullptr) {
        length++;
        cur = cur -> next;
    }

    // Target is the 1-based index of number found from beginning of list
    int target = length - N + 1;

    if (target == 1) {
        Node* newHead = head -> next;
        delete head;
        return newHead;
    }

    cur = head;
    for (int i = 1; i < target - 1; i++) {
        cur = cur -> next;
    }
    Node* nodeToDelete = cur -> next;
    cur -> next = cur -> next -> next;
    delete nodeToDelete;
    return head;
}