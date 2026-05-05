#include <iostream>
using namespace std;

int coffeeVolume(int shots) {
    return shots * 30;  
}

int main() {
    int shots;

    cout << "Enter number of coffee shots: ";
    cin >> shots;

    int total = coffeeVolume(shots);

    cout << "Total coffee volume = " << total << " ml" << endl;

    return 0;
}