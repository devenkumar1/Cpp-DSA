#include<iostream>
using namespace std;

int fact(int n){
  int factorial=1;
  for(int i=1;i<=n;i++){
    factorial=factorial*i;
  }
  return factorial;
}
int main()
{
    int result=fact(5);
    cout<<result;
     return 0;
}