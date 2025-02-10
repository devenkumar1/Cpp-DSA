#include <iostream>
using namespace std;

int Arraysum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{

    int arr[5];
    int i=0;

    for ( i ; i < 5; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int result = Arraysum(arr, 5);

    cout << "the sum of array is " << result;
    return 0;
}