#include<iostream>
using namespace std;
#include<string>

class Node{
    public:
int data;
Node*next;

Node(int val){
data=val;
next=NULL;
}

~Node(){
            if(next!=NULL){
                delete next;
                next=NULL;
            }
}

};


class List{
    public:
Node *head;
Node *tail;

List(){
    head=NULL;
    tail=NULL;
}

void push_front(int val){
Node *newNode= new Node(val);

if(head==NULL){
    head=tail=newNode;

}

else{
    newNode->next=head;
    head=newNode;
}

}


void print_ll(){
    Node*temp=head;
    while(temp!=NULL){
 cout<<temp->data<<" -> ";
      temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void pop_back(){
    Node* temp=head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
}


~List(){
    if(head!=NULL){
        delete head;
        head=NULL;
        cout<<"linkedlist deleted from memory\n";
    }
}


};

int main()
{
    List ll;
     ll.push_front(1);
     ll.push_front(2);
     ll.push_front(3);
     ll.push_front(4);
     ll.push_front(5);

     ll.print_ll();

     ll.pop_back();
     ll.pop_back();
     ll.print_ll();
    
 return 0;
}