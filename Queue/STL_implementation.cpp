#include<iostream>
using namespace std;
#include<string>
#include<queue>

int main()
{
     queue<int> q;
     q.push(1);
     q.push(4);
     q.push(8);
     q.push(7);
     q.push(4);


     while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
     }
    
 return 0;
}

