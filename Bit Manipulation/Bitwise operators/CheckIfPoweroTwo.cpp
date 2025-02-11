#include<iostream>
using namespace std;
#include<string>
bool checkIsPowerOfTwo(int n){
    if(!(n & (n-1))){
        return true;
    }
    return false;
}
int main()
{
     cout<<"checking if the given number is power of 2: "<< checkIsPowerOfTwo(5);
    
 return 0;
}