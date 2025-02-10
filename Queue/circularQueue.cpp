#include<iostream>
using namespace std;
#include<string>
class Queue{
int *arr;
int capacity;
int currsize;

int f,r;
public:

 Queue(int capacity){
    this->capacity=capacity;
    arr= new int[capacity];
    currsize=0;
    f=0;
    r=-1;
}

void push(int data){

    if(currsize==capacity){
        cout<<"Queue is Full\n";
        return ;
    }

r=(r+1)%capacity;
arr[r]=data;
currsize++;


}

void pop(){
if(empty()){
    cout<<"Queue is empty\n";
    return;
}



f=(f+1)%capacity;


currsize--;


}

int front(){
    if(empty()){
    cout<<"Queue is empty\n";
    return -1;
}
return arr[f];


}

bool empty(){
return currsize==0;

}

};


int main()
{
    Queue q(4);

    q.push(1);
    q.push(3);
    q.push(6);
    q.push(8);

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;




     
    
 return 0;
}