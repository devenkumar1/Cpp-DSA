#include<iostream>
using namespace std;
#include<string>
void checkOddorEven(int num){
    if(!(num & 1)){
        cout<<"even"<<endl;
    }
    cout<<"odd"<<endl;
}
int main()
{
  int n=15;
  int x=12;
  checkOddorEven(n);
  checkOddorEven(x);
    
 return 0;
}