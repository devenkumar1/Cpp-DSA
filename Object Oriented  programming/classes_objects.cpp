#include<iostream>
using namespace std;

class Student{
    string Name;
    float cgpa;
    public:
    void getPercentage(){
        cout<<10<<"%"<<endl;
    }
};
int main()
{
     Student s1;
     cout<<sizeof(s1)<<endl;
     s1.getPercentage();
    
 return 0;
}