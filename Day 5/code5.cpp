#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *ptr = 0;  
    ptr = &a;       
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value at ptr: " << *ptr << endl;

    return 0;
}