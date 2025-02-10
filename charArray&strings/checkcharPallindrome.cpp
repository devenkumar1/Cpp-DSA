#include<iostream>
#include<string.h>
using namespace std;

bool isPallindrome(char word[],int n){
    int start=0;
    int end=n-1;
    while (start<end)
    {
        if(word[start++]!=word[end--]){
            cout<<"not valid pallindrome";
        return false;
        }
    }
    cout<<"a valid pallindrome";
        return true;
    
}

int main()
{
  char word[]="racecar";
 isPallindrome(word,strlen(word));
  

 return 0;
}