#include <iostream>
using namespace std;

int main()
{
    // Array declaration
    int array1[50] = {0}; // Initialize all elements to 0
    int array2[20] = {1, 2, 3, 4, 5}; // Remaining elements will be 0
    int array3[] = {1, 2, 3, 4};

    // Iterating and printing array1
    cout << "Contents of array1: ";
    for (int i = 0; i < 50; i++)
    {
        cout << array1[i] << " ";
    }
    cout << endl;

    // Iterating and printing array2
    cout << "Contents of array2: ";
    for (int i = 0; i < 20; i++)
    {
        cout << array2[i] << " ";
    }
    cout << endl;

    // Iterating and printing array3
    cout << "Contents of array3: ";
    for (int i = 0; i < 4; i++)
    {
        cout << array3[i] << " ";
    }
    cout << endl;

    // Calculating length of array2
    int length = sizeof(array2) / sizeof(int);
    cout << "The length of array2 is: " << length << endl;

    return 0;
}
