#include<iostream>
using namespace std;

void printArray(int *array,int lenght){
    for(int i=0;i<lenght;i++){
        cout<<array[i]<<" ";
    }
}
int main()
{

 int array[]={13,18,56,97,43};

int lenght=sizeof(array)/sizeof(int);

 int start=0;
 int end=lenght-1;

 while (start<end)
 {
    swap(array[start],array[end]);
    start++;
    end--;
 }

printArray(array,lenght);
 

    
 return 0;
}