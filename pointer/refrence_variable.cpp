#include<iostream>
using namespace std;
int main()
{
    int a=5;
    cout<<"a="<<a<<endl;
    int &b=a;
    cout<<"b="<<b<<"\n";

    b=25;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;



     return 0;
}