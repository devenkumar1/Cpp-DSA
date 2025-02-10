#include<iostream>
using namespace std;
//pallindrome program

int reverse(int num){
  int result=0;
  while(num>0){
    int lastdigit=num%10;
     result=result*10+lastdigit;
    num=num/10;
  }
  return result;
}

bool ispalindrome(int num){
  int reversenum=reverse(num);
  return num==reversenum;
}

int main()
{int n;
  cout<<"enter a number";
  cin>>n;

  if(ispalindrome(n)){
    cout<<n<<" is a pallindrome";

  }
  else{
    cout<<n<<" is not a pallindrome";
  }
    
     return 0;
}