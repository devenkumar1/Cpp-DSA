#include<iostream>
using namespace std;
#include<string>

union Employee{
    int id;
    char name[21];
    char dob[11];
    char doj[11];
    float salary;
};

int main()
{
    string str;
Employee employee;
cout << "Enter employee ID: ";
    cin >> employee.id;
    int id = employee.id;  
    cout << "Enter employee name: ";
   cin.getline(employee.name, 21);
   


    



    
 return 0;
}