#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid]<key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main(){
    int odd[7] = {1, 2, 3, 4, 5, 6, 7};
    int even[6] = {1, 2, 3, 4, 5, 6};

    int index = binarysearch(even, 6, 2);
    if (index == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << index << endl;
    }

    return 0;
}
