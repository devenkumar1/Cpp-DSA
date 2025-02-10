#include<iostream>
using namespace std;
#include<string>
#include <algorithm>
#include<vector>

template<class T>
class Stack{

vector<T> vec;
public:

void push(T val){
    vec.push_back(val);
}
void pop(){
    vec.pop_back();
}

T top(){
     int lastidx=vec.size()-1;

     return vec[lastidx];
}

};

int main()
{
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();

   cout<< s.top();

    
 return 0;
}