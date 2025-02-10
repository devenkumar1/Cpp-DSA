#include<iostream>
using namespace std;

void printUpperMatrix(int arr[3][3], int size) {
    cout << "Upper Matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j >= i)
                cout << arr[i][j] << " ";
            else
                cout <<"0" ;
        }
        cout << endl;
    }
}

void printLowerMatrix(int arr[3][3], int size) {
    cout << "Lower Matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j <= i)
                cout << arr[i][j] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3];
    int size = 3;

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }

    printUpperMatrix(arr, size);
    printLowerMatrix(arr, size);


    return 0;
}


