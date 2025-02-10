#include<iostream>
using namespace std;
#include<string>
int fibonacci(int n){
    if(n==0||n==1)
    return n;
    
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int  result = fibonacci(6);
    cout<<result;
 return 0;
}