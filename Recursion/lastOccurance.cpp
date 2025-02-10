#include<iostream>
using namespace std;
#include<string>
#include<vector>

int lastOccurance(vector<int> arr ,int target, int i=0){
if(i==arr.size()){
    return -1;

}
int idxfound=lastOccurance(arr,target,i+=1);

if(idxfound==-1 && arr[i]==target){
    return i;
}

return idxfound;


}
int main()
{
     vector<int> arr1={1,2,3,3,3,5,6};
     int target=3;
     cout<<"last occurance of targetvalue "<<target<<" = "<<lastOccurance(arr1,3);
    
 return 0;
}