#include<iostream>
using namespace std;
#include<string>
// void counter(){
//     static int count=0;
//     count++;
//     cout<<count<<" ";
// }

class Example{
public:
static int x;

};

int Example::x=0;

int main()
{
    Example e1;
    Example e2;
    Example e3;

    cout<<e1.x++<<" \n";
    cout<<e2.x++<<" \n";
    cout<<e3.x++<<"\n";
    //  counter();
    //  counter();
    //  counter();
    
 return 0;
}