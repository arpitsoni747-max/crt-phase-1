
//write a program that takes an integer in as a input print all number from 1 to n fron but skip any number that is multiply of 3 using contious statement
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            continue;  // skip multiples of 3
        }
        cout << i << " ";
    }

    return 0;
}
