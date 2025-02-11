#include<iostream>
using namespace std;
#include<string>
int clearIthBit(int n , int i){
    int bitMask= ~(1<<i);
    return (n & bitMask);
}
int main()
{
     cout<<"clearing the ith bit of 6 by 1 is: "<<clearIthBit(6,1);
    
 return 0;
}