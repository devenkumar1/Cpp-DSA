#include<iostream>
using namespace std;
#include<string>
void print(int n){
    if(n==0){
        return;
    }
     //for decreasing order  print(n-1)
     cout<<n<<" ";//kam
     print(n-1);//faith, next call
    
    
}
int main()
{
     
    print(10);
 return 0;
}