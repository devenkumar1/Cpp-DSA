#include<iostream>
#include<string>
using namespace std;

int main()
{
     
    string str="i am alive sunny";
    cout<<str.length()<<endl;
    cout<<str[3]<<endl;
    cout<<str.at(3)<<endl;

    cout<<str.substr(0,10)<<endl;

    cout<<str.find("sunny")<<endl;
 return 0;
}