// Ques 1: Write C++ program to create a doubly linkedlist and insert a node at any position . Input Linkedlist: 2<->4<->5 ,p = 2, x = 6 Output: 2 4 5 6, Explanation: p = 2, and x = 6. So, 6 is
// inserted after p, i.e, at position 3
// (0-based indexing).


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

void insertAtPosition(Node*& head, int pos, int x) {
    Node* newNode = new Node(x);
    if (pos == 0) {
        newNode->next = head;
        if (head) head->prev = newNode;
        head = newNode;
        return;
    }
    Node* temp = head;
    for (int i = 0; temp != nullptr && i < pos; ++i) {
        temp = temp->next;
    }
    if (temp == nullptr) return;
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next) temp->next->prev = newNode;
    temp->next = newNode;
}

void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(2);
    head->next = new Node(4);
    head->next->prev = head;
    head->next->next = new Node(5);
    head->next->next->prev = head->next;

    int p = 2, x = 6;
    insertAtPosition(head, p, x);
    printList(head);

    return 0;
}




// Ques 2: Write C++ program that detect the cycle inside a given linkedlist if their is any cycle present then print true otherwise print false. Input: head = [3,2,0,-4], pos = 1. Output: true. Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).



#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode* head) {
    if (!head || !head->next) return false;
    ListNode* slow = head;
    ListNode* fast = head->next;
    while (slow != fast) {
        if (!fast || !fast->next) return false;
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}


int main() {
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;

    cout << (hasCycle(head) ? "true" : "false") << endl;

    return 0;
}

