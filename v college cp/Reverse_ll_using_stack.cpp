#include <iostream>
using namespace std;
#include <stack>

struct ListNode {
    int value;
    ListNode* next;
    ListNode(int x) : value(x), next(nullptr) {}
};

class LinkedList {
public:
    ListNode* head;
    LinkedList() : head(nullptr) {}

    void append(int value) {
        if (!head) {
            head = new ListNode(value);
        } else {
            ListNode* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = new ListNode(value);
        }
    }

    void printList() {
        ListNode* current = head;
        while (current) {
            cout << current->value << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

ListNode* reverseLinkedList(ListNode* head) {
    if (!head) return nullptr;

    stack<ListNode*> stack;
    ListNode* current = head;

 
    while (current) {
        stack.push(current);
        current = current->next;
    }

    
    ListNode* newHead = stack.top();
    stack.pop();
    current = newHead;

    while (!stack.empty()) {
        current->next = stack.top();
        stack.pop();
        current = current->next;
    }
    
    current->next = nullptr;

    return newHead;
}

int main() {
    
    LinkedList linkedList;
    linkedList.append(1);
    linkedList.append(2);
    linkedList.append(3);
    linkedList.append(4);

    cout << "Original Linked List:" << endl;
    linkedList.printList();

    
    linkedList.head = reverseLinkedList(linkedList.head);

   cout << "Reversed Linked List:" << endl;
    linkedList.printList();

    return 0;
}
