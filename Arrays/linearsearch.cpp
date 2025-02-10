#include<iostream>
using namespace std;

int linearsearch(int *arr,int size, int element){
  for(int i=0;i<size;i++){
    if(arr[i]==element){
      return i;
    }
  }
  return -1;
}
int main()
{
    int array[]={10,13,16,17,21,43,64,54,32};
    int lenght=sizeof(array)/sizeof(int);

    int result=linearsearch(array,lenght,43);

    cout<<"element found at index: "<<result;


     return 0;
}