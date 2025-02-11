#include<iostream>
using namespace std;
#include<string>

int setIthBit(int num, int i){
    int bitmask= 1<<i;
    return num|bitmask;
    
}

int main()
{
    cout<<"the set ith bit for number=6 and i=3: "<<setIthBit(6,3); 
    
 return 0;
}