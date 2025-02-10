#include<iostream>
using namespace std;
int main()
{
  /*
    pattern:
     ****
     ***
     **
     *  
  
  */
    int n=4;

    for(int i=1;i<=4;i++){
       for(int j=1;j<=(n-i+1);j++){
      cout<<"*"<<" ";

       }
     cout<<endl;
    }
     return 0;
}