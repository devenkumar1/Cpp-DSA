#include<iostream>
#include<algorithm>
using namespace std;
void printArray(int *array,int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    
 int arr[]={23,11,1,2,5,89,32,45};
 //ascending order
 sort(arr,arr+8);
 printArray(arr,8);
//descending order
 sort(arr,arr+8,greater<int>());

printArray(arr,8);

 return 0;
}