#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        prev = next = NULL;
    }
};

class doublyList {
public:
    Node *head;
    Node *tail;

    doublyList() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node *newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void printList() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << "-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    doublyList ll;

    ll.push_front(12);
    ll.push_front(13);
    ll.push_front(14);
    ll.printList();
    return 0;
}