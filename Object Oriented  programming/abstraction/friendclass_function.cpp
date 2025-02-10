/*Friend function:
a friend class or function can access private and protected members of 
other classes in which it is declared as friend.

*/
#include <iostream>
#include <string>
using namespace std;

class A; // Forward declaration of class A

class B{
public:
    void showSecret(A &obj);
};

class A {
    string secret = "I love coding";
    friend class B; 
};

void B::showSecret(A &obj) {
    cout << obj.secret << endl;
}

int main() {
    A obj1;
    B obj2;
    obj2.showSecret(obj1);

    return 0;
}
