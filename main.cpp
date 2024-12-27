#include <iostream>
using namespace std;

int main() {
    int num;  // The number for which the table will be printed
    int range; // The range up to which the table should be printed

    // Input the number and range
    cout << "Enter the number for the multiplication table: ";
    cin >> num;
    cout << "Enter the range for the table: ";
    cin >> range;

    cout << "\nMultiplication Table of " << num << ":\n";

    // Loop to generate and print the table
    for (int i = 1; i <= range; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
