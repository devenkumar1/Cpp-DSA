#include<iostream>
using namespace std;
#include<string>
#include<list>

template <class T>

class Stack{
list<T> ll;

public:
void push(T val){
    ll.push_front(val);

}

void pop(){
    ll.pop_front();
}

T top(){
    return ll.front();
}

bool isEmpty(){ 
    return ll.size()==0;
}


};


int main()
{
     Stack<int> s;
     s.push(1);
     s.push(8);
     s.push(7);
     s.push(4);

while(!s.isEmpty()){
    cout<<s.top()<<" ";
    s.pop();
}
cout<<endl;

    
 return 0;
}