// Ques 1. Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

// The first node is considered odd, and the second node is even, and so on.

// Note that the relative order inside both the even and odd groups should remain as it was in the input.

// You must solve the problem in O(1) extra space complexity and O(n) time complexity.

// Input: head = [1,2,3,4,5]
// Output: [1,3,5,2,4]. Note :- Take all the required input from user.



#include <iostream>

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(NULL) {}
};

void insert(Node*& head, int x) {
    if (!head) {
        head = new Node(x);
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = new Node(x);
}

Node* oddEvenSort(Node* head) {
    if (!head || !head->next) return head;

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;  // to store the 1st even indexed element

    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;
    return head;
}

void printList(Node* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
}

int main() {
    Node* head = NULL;
    int n, val;
    
    std::cout << "Enter number of nodes: ";
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter value of node " << i + 1 << ": ";
        std::cin >> val;
        insert(head, val);
    }

    head = oddEvenSort(head);
    printList(head);

    return 0;
}
