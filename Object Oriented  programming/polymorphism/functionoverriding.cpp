#include<iostream>
using namespace std;
#include<string>
class parent{
    public:
void show(){
    cout<<"message from parent";
}
};

class child:public parent{
    public:

void show(){
    cout<<"message from child"; 
}

};

int main()
{
     child c1;
     c1.show();
    
 return 0;
}