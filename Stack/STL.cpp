#include <iostream>
using namespace std;
#include <string>
#include <stack>

int main()
{
    stack<int> s;
    s.push(1);
    s.push(5);
    s.push(7);
    s.push(3);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    return 0;
}