#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    while (true) {
        cout << "Enter a positive number (negative to stop): ";
        cin >> num;

        if (num < 0)
            break;

        sum += num;
    }

    cout << "Final sum is: " << sum << endl;

    return 0;
}