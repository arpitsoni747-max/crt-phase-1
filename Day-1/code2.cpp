//write a cpp program that takes 3 distinct integer as a input and find the largest among them using nested conditional statement 
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three distinct integers: ";
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            cout << "Largest number is: " << a;
        } else {
            cout << "Largest number is: " << c;
        }
    } else {
        if (b > c) {
            cout << "Largest number is: " << b;
        } else {
            cout << "Largest number is: " << c;
        }
    }

    return 0;
}
