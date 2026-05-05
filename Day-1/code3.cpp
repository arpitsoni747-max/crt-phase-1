//write a cpp program that takes 2 integer as a input find the maximum of 2 using the ternary conditional operator 
#include <iostream>
using namespace std;

int main() {
    int a, b, max;

    cout << "Enter two integers: ";
    cin >> a >> b;

    max = (a > b) ? a : b;

    cout << "Maximum number is: " << max;

    return 0;
}