#include <iostream>
using namespace std;
class MyArray {
private:
    int* ptr;
    int total_size;
    int used_size;
public:
    
    MyArray(int total, int used) {
        total_size = total;
        used_size  = used;
        ptr        = new int[total_size];
    }

    ~MyArray() {
        delete[] ptr;
        ptr = nullptr;
    }

    void setValues(int values[], int count) {
        for (int i = 0; i < count && i < total_size; i++)
            ptr[i] = values[i];
        used_size = count;
    }

    void display() {
        cout << "Array: [ ";
        for (int i = 0; i < used_size; i++)
            cout << ptr[i] << " ";
        cout << "]" << endl;
    }

    int search(int value) {
        for (int i = 0; i < used_size; i++) {
            if (ptr[i] == value)
                return i; 
        }
        return -1;        
    }

    void insertAt(int index, int value) {
        if (used_size >= total_size) {
            cout << "Array is full. Cannot insert." << endl;
            return;
        }
        if (index < 0 || index > used_size) {
            cout << "Invalid index." << endl;
            return;
        }

        for (int i = used_size; i > index; i--)
            ptr[i] = ptr[i - 1];

        ptr[index] = value;   
        used_size++;        
    }
};

int main() {
    MyArray arr(10, 6);

    int initial[] = {2, 5, 9, 3, 1, 9};  
    arr.setValues(initial, 6);
    cout << "Initial ";
    arr.display();
    int target1 = 3;
    int result1 = arr.search(target1);
    if (result1 != -1)
        cout << "search(" << target1 << ") -> Found at index " << result1 << endl;
    else
        cout << "search(" << target1 << ") -> Not Found" << endl;
    int target2 = 99;
    int result2 = arr.search(target2);
    if (result2 != -1)
        cout << "search(" << target2 << ") -> Found at index " << result2 << endl;
    else
        cout << "search(" << target2 << ") -> Not Found" << endl;

    cout << "\nInserting value 7 at index 2..." << endl;
    arr.insertAt(2, 7);

    cout << "After insert: ";
    arr.display();

    return 0;
}
