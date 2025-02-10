/*a virtual function is a member function that
 you expect to be redefined in  derived class. */

 //it's runtime-polymorphism

#include<iostream>
using namespace std;
#include<string>
class parent{
    public:
virtual void hello(){
cout<<"hello from parent";
}

};

class child: public parent{
    public:
 void hello(){   //function is refined here in derived class.
cout<<"hello from child";
}
    
};


int main()
{
     child c1;
     c1.hello();
    
 return 0;
}