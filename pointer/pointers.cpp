#include<iostream>
using namespace std;
int main()
{
    int a=10;
    cout<<&a<<endl;
    int *pointer=&a;
    cout<<pointer<<endl;

    int **pptr=&pointer;
    cout<<"pointer to pointer= "<<pptr<<endl;

    cout<<"the derefrence method 1 of a is "<<*pointer<<endl;
    cout<<"the derefrence method 2 of a is "<<*(&a);
     return 0;
}