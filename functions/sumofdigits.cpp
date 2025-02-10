#include<iostream>
using namespace std;

int sum(int n){
int result=0;
  while (n>0){
    int lastdigit=n%10;
    result=result+lastdigit;
    n=n/10;

  }
  return result;

}
int main()
{

  int res=sum(721);
  cout<<"the sum of the digits is "<<res;

    
     return 0;
}