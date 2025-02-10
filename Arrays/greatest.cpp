#include<iostream>
using namespace std;
int main()
{
    int array[]={18,12,16,171,86,45,21};
    int lenght=sizeof(array)/sizeof(int);
   int max=1;
    for(int i=0;i<lenght;i++){
      if(array[i]>max){
        max=array[i];
      }
    
    }
    cout<<"the largest number in the array is = "<<max;
     return 0;
}