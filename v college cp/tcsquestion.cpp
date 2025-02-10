#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

union Employee {
    int id;
    char name[21];
    char dob[11];
    char doj[11];
    float salary;
};

int main() {
    Employee employee;
    cout << "Enter employee ID: ";
    cin >> employee.id;
    int id = employee.id;  
    
    cout << "Enter employee name: ";
    cin.ignore(); 
    cin.getline(employee.name, 21);
    char name[21];
    strcpy(name, employee.name); 
    
   
    cout << "Enter employee DOB (dd/mm/yyyy): ";
    cin.getline(employee.dob, 11);
    char dob[11];
    strcpy(dob, employee.dob); 
    
    
    cout << "Enter employee DOJ (dd/mm/yyyy): ";
    cin.getline(employee.doj, 11);
    char doj[11];
    strcpy(doj, employee.doj); 
    
   
    cout << "Enter employee salary: ";
    cin >> employee.salary;
    float salary = employee.salary;  
    
    cout << "ID : " << id << endl;
    cout << "Name : " << name << endl;
    cout << "DOB : " << dob << endl;
    cout << "DOJ : " << doj << endl;
    cout << fixed << setprecision(1);
    cout << "Salary : " << salary << endl;

    return 0;
}
