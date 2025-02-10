#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = rear = NULL;
    }

    ~Queue()
    {
        while (!empty())
        {
            pop();
        }
    }

    void push(int val)
    {
        Node *newNode = new Node(val);

        if (front == NULL)
        {
            front = rear = newNode;
        }

        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void pop()
    {
        if (empty())
        {
            cout << "Queue is empty " << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        delete temp;
    }

    int peek() // Renamed the method to avoid name conflict
    {
        if (empty())
        {
            cout << "Queue is empty " << endl;
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        return front == NULL;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(10);
    q.push(18);
    q.push(31);
    q.push(17);

    while (!q.empty())
    {
        cout << q.peek() << endl; // Updated to use the new method name
        q.pop();
    }

    return 0;
}
