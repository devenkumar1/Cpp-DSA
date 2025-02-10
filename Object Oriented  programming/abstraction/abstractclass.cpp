#include<iostream>
using namespace std;
#include<string>
//abstract class
class shape{
    public:
   virtual void draw()=0; //pure virtual function.
};

class circle: public shape{
    public:
    void draw(){
 cout<<" draw circle\n";
    }
};
int main()
{
     circle c1;
     c1.draw();
    
 return 0;
}