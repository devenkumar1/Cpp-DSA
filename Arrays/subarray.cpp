#include<iostream>
using namespace std;

void printSubArray(int *array,int n){
    for(int start=0;start<n;start++){
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout<<array[i];
            }
            cout<<",";
        }
        cout<<endl;

    }
}


int main()
{
    
 int array[]={1,2,3,4,5};
 int n=sizeof(array)/sizeof(int);
 printSubArray(array,n);
 return 0;
}
//time complexity= n^3