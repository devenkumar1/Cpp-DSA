#include <iostream>
using namespace std;
#include <string>
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

class Stack
{
    Node *head;

public:
    Stack()
    {
        head = NULL;
    }

    void push(int val)
    {
        Node * newNode= new Node(val);

        if(head==NULL){
            head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }

        
    }

    void printList(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.printList();

    return 0;
}