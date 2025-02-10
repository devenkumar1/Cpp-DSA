//paypalishiring
#include<iostream>
using namespace std;

int main(){
   string stringInput;
  int  numrow;
  cout<<"enter number of rows"<<" ";
  cin>>numrow;

cout<<"enter the string"<<" ";
  cin>>stringInput;
 

  int index = 0;
  for(int i=0;i<numrow;i++){
    for(int j=i;j<stringInput.length();j=j+numrow){
      cout<<stringInput[j];
      index++;
    }
    cout<<endl;
  }


}

