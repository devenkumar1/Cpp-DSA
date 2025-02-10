#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "The list is empty. Cannot pop." << endl;
            return;
        }

        Node *temp = head;
        head = head->next;

        // If the list becomes empty after popping
        if (head == NULL)
        {
            tail = NULL;
        }

        temp->next = NULL; // Disconnect the node from the list
        delete temp;
    }

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

    void top()
    {
        if (head != NULL)
        {
            cout << "Top element: " << head->data << endl;
        }
        else
        {
            cout << "The list is empty." << endl;
        }
    }
};

int main()
{
    List ll;
    ll.push_front(12);
    ll.push_front(4);
    ll.push_front(6);
    ll.push_front(8);

    ll.printList();
    ll.top();

    ll.pop_front();
    ll.printList();
    ll.top();

    return 0;
}
