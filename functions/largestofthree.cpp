#include<iostream>
using namespace std;
int greatest(int num1,int num2, int num3){
  if(num1>num2 & num1>3){
    cout<<num1<< " is the largest of these three numbers";
  }
  else if(num2>num1 & num2>num3){
    cout<<num2<< " is the largest of these three numbers";
  }
  else{
    cout<<num3 << " the largest of these three numbers";
  }
}
int main()
{
    greatest(121,243,876);
     return 0;
}