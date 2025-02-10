#include<iostream>
#include<cmath>
using namespace std;

int wholesquare(int num1,int num2){
   return pow(num1,2)+pow(num2,2)+2*num1*num2;
    }
int main()
{
    //(a+b)^2=a^2+b^2+2ab
   int result= wholesquare(2,4);
   cout<<result;
    
     return 0;
}