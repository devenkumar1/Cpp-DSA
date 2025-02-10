#include <iostream>
using namespace std;
#include <string>
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}

int main()
{
    int result = sum(5);
    cout << result;

    return 0;
}