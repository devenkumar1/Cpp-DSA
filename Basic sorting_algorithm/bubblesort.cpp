#include <iostream>
using namespace std;

void bubblesort(int *array, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[] = {5, 4, 1, 3, 2};
    int n = sizeof(array) / sizeof(int);
    cout << "before sorting: " << endl;
    printArray(array, n);
    bubblesort(array, n);

    cout << "the sorted array is: " << endl;
    printArray(array, n);

    return 0;
}