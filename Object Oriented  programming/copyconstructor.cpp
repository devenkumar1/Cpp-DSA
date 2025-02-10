#include<iostream>
using namespace std;
class  Car{
    public:
    string name;
    string color;
Car(string name, string color){  
    this->name=name;
    this->color=color;
}
   
   Car( Car &original ){    
    cout<<"copying from the original constructor\n";
 name=original.name;
  color=original.color;
 }


};
int main()
{
     Car c1("BMW","black");
     Car c2(c1);  
     cout<<"car name: "<<c2.name<<endl;
     cout<<"car color: "<<c2.color<<endl;
     
    
 return 0;
}