#include<iostream>
using namespace std;
#include<string>
#include<vector>

int firstoccurance(vector<int> a,int target ,int i=0){
    int size= a.size();
  
 if(i==size){
    return -1;
  }

else if(a[i]==target){
    return i;
}

firstoccurance(a,target,i=i+1);


}

int main()
{
     vector<int> vector1={1,2,3,3,4};

     cout<<firstoccurance(vector1,3);
 return 0;
}