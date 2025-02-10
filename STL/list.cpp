#include<iostream>
using namespace std;
#include<string>
#include<list>
#include<iterator>

void printList(list<int> ll){
     list<int> ::iterator i;

     for(i=ll.begin();i!=ll.end();i++){
        cout<<(*i)<<" -> ";
     }
     cout<<"null";
     cout<<endl;
}
int main()
{
     list<int> ll;

     //operations:
     /*

     .push_front & push_back
     .size()
     .front() & back()
     .pop_front & pop_back
    
      */

     ll.push_front(2);
     ll.push_front(1);
     ll.push_back(3);
     ll.push_back(4);// 1 -> 2 -> 3 -> 4
     

     //iterator
    printList(ll);

     cout<<"size of ll : "<<ll.size()<<endl;

     ll.pop_front();
     printList(ll);

 return 0;
}