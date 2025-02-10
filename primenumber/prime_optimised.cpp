#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int num;
    cout<<"enter a number";
    cin>>num;
    bool isprime=true;

    for(int i=2;i<sqrt(num);i++){
      if(num%i==0){
        isprime=false;
        break;
      }
    }
    if(isprime){
      cout<<"the entered number is a prime number"<<endl; 
    }
    else{
      cout<<"the entered number is not a prime number"<<endl; 
    } 
    
     return 0;
}