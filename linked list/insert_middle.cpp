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

    public:

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

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
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
  ll.insert(3,2);
   ll.printList();

    return 0;
}
