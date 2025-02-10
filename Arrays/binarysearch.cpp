#include <iostream>
using namespace std;
int binarysearch(int *arr, int n, int k)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int array[] = {2, 4, 6, 8, 18, 23};
    int lenght = sizeof(array) / sizeof(int);
    int key;
    cout << "enter key you want to search: ";
    cin>>key;
    
    cout << binarysearch(array, lenght, key);
    return 0;
}