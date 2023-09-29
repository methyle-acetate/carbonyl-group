#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;

int main() {
    // Get input from the user
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    // Display binary representation
    cout << "Binary: " << bitset<8> (decimalNumber)<< endl;

    // Display octal representation
    cout << "Octal: " << oct << decimalNumber <<endl;

    // Display hexadecimal representation
    cout << "Hexadecimal: " << hex << decimalNumber << endl;


    return 0;
}
