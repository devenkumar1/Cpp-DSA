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
    ~Node(){
            if(next!=NULL){
                delete next;
                next=NULL;
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

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail=newNode;
        }
    }

 void insert(int val, int pos)
    {
        Node *newNode = new Node(val);

        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
          if(temp==NULL){
            cout<<"insertion position is invalid \n";
            return;
          }

            temp = temp->next;
        }
        // temp is now point to pos-1; i.e prev/left

        newNode->next = temp->next;
        temp->next = newNode;
    }





    void printList(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void pop_front(){

        if(head==NULL){
            cout<<"linked list is empty\n";
            return;
        }
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }




     ~List(){
        if(head!=NULL){
            delete head;
            head=NULL;
        }
    }
};

int main()
{
    List ll;
    ll.push_back(18);
    ll.push_back(28);
    ll.push_back(38);   

    ll.printList();

    ll.insert(14,2);
    
    ll.printList();
ll.pop_front();
ll.printList();
    return 0;
}
