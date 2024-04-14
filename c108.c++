#include <iostream>
using namespace std;

bool ispresent(int arr[][4], int rows, int cols, int target) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[3][4];
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    if (ispresent(arr, 3, 4, target)) {
        cout << "Element is found" << endl;
    } else {
        cout << "Element is not found" << endl;
    }
    return 0;
}
