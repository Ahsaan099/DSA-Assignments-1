#include <iostream>
using namespace std;
int main() {
    int x = 15;
    int& ref = x;      
    ref = 99;           
    cout << "=== Part (a): Reference ===" << endl;
    cout << "x   = " << x   << endl;   
    cout << "ref = " << ref << endl; 

    int* ptr = &x;     
    *ptr = 200;       

    cout << "\n=== Part (b): Pointer ===" << endl;
    cout << "Address stored in ptr : " << ptr  << endl;  
    cout << "Value at that address : " << *ptr << endl;  
    cout << "x is now              : " << x    << endl;  

    return 0;
}
