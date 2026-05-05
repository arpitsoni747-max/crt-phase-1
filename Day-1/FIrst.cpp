 #include <iostream>
using namespace std;

int main() {
    int age;
    
    cout << "Enter age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age";
    }
    else if (age >= 0 && age <= 17) {
        cout << "Not eligible to vote";
    }
    else if (age >= 18 && age <= 99) {
        cout << "Eligible to vote";
    }
    else if (age >= 100) {
        cout << "Eligible to vote";
    }

    return 0;
}
