#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;  
    }
    return -1;          
}
int binarySearch(int arr[], int n, int target) {
    int low  = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;   

        if (arr[mid] == target)
            return mid;       
        else if (arr[mid] < target)
            low = mid + 1;    
        else
            high = mid - 1;         
    }
    return -1;  
}

int main() {
    int arr1[] = {2, 5, 9, 3, 1, 9};
    int n1 = 6;

    cout << "=== Linear Search ===" << endl;
    cout << "Array: [2, 5, 9, 3, 1, 9]" << endl;

    int idx = linearSearch(arr1, n1, 9);   
    if (idx != -1)
        cout << "linearSearch(9)  -> Found at index " << idx << endl;
    else
        cout << "linearSearch(9)  -> Not Found" << endl;

    idx = linearSearch(arr1, n1, 99);   
    if (idx != -1)
        cout << "linearSearch(99) -> Found at index " << idx << endl;
    else
        cout << "linearSearch(99) -> Not Found" << endl;

    int arr2[] = {1, 2, 3, 5, 9, 9};   
    int n2 = 6;
    cout << "\n=== Binary Search ===" << endl;
    cout << "Sorted Array: [1, 2, 3, 5, 9, 9]" << endl;

    idx = binarySearch(arr2, n2, 5);   
    if (idx != -1)
        cout << "binarySearch(5)  -> Found at index " << idx << endl;
    else
        cout << "binarySearch(5)  -> Not Found" << endl;

    idx = binarySearch(arr2, n2, 99);   
    if (idx != -1)
        cout << "binarySearch(99) -> Found at index " << idx << endl;
    else
        cout << "binarySearch(99) -> Not Found" << endl;

    return 0;
}
