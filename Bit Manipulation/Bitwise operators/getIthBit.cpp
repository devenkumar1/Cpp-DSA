#include <iostream>
using namespace std;
#include <string>
int getIthBit(int number, int i)
{
    int bitmask = 1 << i;
    if (!(number & bitmask))
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n = 6;
    int pos = 2;
    int result=getIthBit(n,pos);
    cout<<"result: "<<result;

    return 0;
}