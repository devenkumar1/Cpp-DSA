#include<iostream>
using namespace std;
#include<string>
int fib(int n){

if(n==0||n==1){
    return n;
     

}

return fib(n-1)+fib(n-2);

}

int main()
{
  int num;
  cin>>num;

   cout<< fib(num);
 return 0;
}