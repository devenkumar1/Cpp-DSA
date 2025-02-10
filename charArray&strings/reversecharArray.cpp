#include<iostream>
#include<string.h>

using namespace std;

void revChar(char word[],int n){
    int start=0;
    int end=n-1;
while (start<end){

swap(word[start],word[end]);

start++;
end--;

}

}

int main()
{
  char word[]="SUNNY";

  int len=strlen(word);

revChar(word,len);
cout<<word;
    
 return 0;
}