#include <iostream>
using namespace std;
#include <string>

int sum(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{

    int result = sum(10, 20);
    cout << result << endl;
    int result2 = sum(10, 20, 30);
    cout << result2 << endl;
    return 0;
}