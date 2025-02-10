#include<iostream>
#include<vector>
using namespace std;
int main()
{
     vector<int> vec1;
     vector<int> vector2={1,2,3,4,5};
     cout<<"the size of vector1 is "<<vec1.size()<<endl;
      cout<<"the size of vector2 is "<<vector2.size()<<endl;
      cout<<vector2.capacity()<<endl;

      vector2.push_back(7);
            cout<<vector2.capacity()<<endl;
            vector2.push_back(8);
            cout<<vector2.capacity()<<endl;

      //fill constructor
      vector<int> vector3(5,-1); //size=5, intialisied form=-1;
      
    
 return 0;
}