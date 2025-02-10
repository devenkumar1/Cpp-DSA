#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> arr, int target){
    int start=0;
    int end=arr.size()-1;
    int currentsum=0;
    vector<int> answer;
    while(start<end){
        currentsum=arr[start]+arr[end];
        if(currentsum==target){
            answer.push_back(start);
            answer.push_back(end);
            return answer;
        }
        else if(currentsum>target){
            end--;
        }
        else{
            start++;
        }
    }
    return answer;

}
using namespace std;
int main()
{
    vector<int> vec={2,7,11,15};
    int target=9;
   vector<int> answer= pairsum(vec,target);
 cout<<answer[0]<<" "<<answer[1]<<endl;
     
    
 return 0;
}