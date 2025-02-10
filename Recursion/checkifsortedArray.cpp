#include<iostream>
using namespace std;
#include<string>

bool isSorted(int arr[],int size,int i=0){
if(i==size-1){
    return true;
}
 if(arr[i]>arr[i+1]){
    return false;
 }

 return isSorted(arr,size,i=i+1);

}

int main()
{

int array1[]={11,22,33,44,55,66};
int array2[]={11,32,10,14,16,18};
int size1=sizeof(array1)/sizeof(int);
int size2=sizeof(array2)/sizeof(int);

    cout<<isSorted(array1,size1, 0)<<endl;
    cout<<isSorted(array2,size2, 0)<<endl;
 return 0;
}