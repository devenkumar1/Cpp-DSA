#include<iostream>
#include<string>
using namespace std;
int main()
{
     string str;
    //  cin>>str;// but in this case the space between words will not be allowed so use getline;
     getline(cin,str);
     cout<<"the string is "<<str; 
    
 return 0;
}