#include<iostream>
using namespace std;
int main()
{
    /*
    pattern:
    1
    12
    123
    1234
    */

    int n=4;
    char ch='A';
    for(int i=1;i<=4;i++){
      for(int j=1;j<=i;j++){
        cout<<ch;
        ch++;

      }
      cout<<endl;
    }
     return 0;
}