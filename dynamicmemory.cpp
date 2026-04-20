#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;
    int* arr = new int[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "\nMaximum element : " << maxVal << endl;
    cout << "Sum of elements : " << sum    << endl;

    delete[] arr;
    arr = nullptr;
    cout << "Memory deallocated successfully." << endl;

    return 0;
}
