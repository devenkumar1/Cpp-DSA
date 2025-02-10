#include<iostream>
using namespace std;
void printArray(int *array,int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int *array,int n){
    for(int i=0;i<n;i++){
        int minIdx=i;
     for(int j=i+1;j<n;j++){
        if(array[j]<array[minIdx]){
            minIdx=j;
        }

     }
     swap(array[i],array[minIdx]);
    }
printArray(array,n);

}

int main()
{
    int array[]={5,4,1,3,2};
    int size=sizeof(array)/sizeof(int);

    selectionSort(array,size);
    
 return 0;
}