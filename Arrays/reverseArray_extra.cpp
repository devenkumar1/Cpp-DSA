#include <iostream>
using namespace std;
int main()
{
    int original_array[] = {2, 3, 18, 97, 56};
    int lenght = sizeof(original_array) / sizeof(int);

    int temp[lenght];

    for (int i = 0; i < 5; i++)
    {
        temp[i] = original_array[4 - i];
    }

    cout << "the reverse of array is :" << endl;
    for (int i = 0; i < 5; i++)
    {
        original_array[i] = temp[i];
        cout << original_array[i] << " ";
    }

    return 0;
}