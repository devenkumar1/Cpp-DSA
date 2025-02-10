#include<iostream>
using namespace std;

void printArray(){
    
}
int main()
{
    int arr[3][4];
    int n=3;
    int m=4;
cout<<"enter array elenments: "<<endl;
    for (int  i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin>>arr[i][j];
      }
      
    }

 cout<<"the array entered is :"<<endl;
     for (int  i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
    
    
 return 0;
}