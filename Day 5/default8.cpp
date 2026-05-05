#include <iostream>
using namespace std;

void applyDiscount(float &bill) {
    bill = bill - (bill * 0.10); 
}

int main() {
    float bill;

    cout << "Enter bill amount: ";
    cin >> bill;

    applyDiscount(bill); 

    cout << "Bill after 10% discount = " << bill << endl;

    return 0;
}