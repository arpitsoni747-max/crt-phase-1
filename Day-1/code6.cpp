//wap cpp program that takes a student percentage between 0 to 100 as input and calculate their grades based on the criteria - 90 and above A , 80 TO 89 B , 70 TO 79 C, 60-69 D below 60 fail
#include <iostream>
using namespace std;

int main() {
    float percentage;

    cout << "Enter student percentage: ";
    cin >> percentage;

    if (percentage < 0 || percentage > 100) {
        cout << "Invalid percentage";
    }
    else if (percentage >= 90) {
        cout << "Grade A";
    }
    else if (percentage >= 80) {
        cout << "Grade B";
    }
    else if (percentage >= 70) {
        cout << "Grade C";
    }
    else if (percentage >= 60) {
        cout << "Grade D";
    }
    else {
        cout << "Fail";
    }

    return 0;
}
