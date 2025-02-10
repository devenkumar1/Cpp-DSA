#include<iostream>
#include<string.h>
using namespace std;

void toUppercase(char arr[],int n){
for(int i=0;i<n;i++){
    char ch=arr[i];
    if(ch>='A' && ch<='Z'){
        continue;
    }
    else{
        arr[i]=ch-'a'+'A';
    }


}
}
int main()
{
  char word[]= "DeVEn";   
 int n=strlen(word);

 toUppercase(word,n);
 cout<<word;
    
 return 0;
}