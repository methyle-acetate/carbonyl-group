#include <iostream>
using namespace std;

int main() {
    int number;

    // Input a number from the user
    cout << "Enter an integer: ";
    cin >> number;

    // Determine whether the number is positive, negative, or zero
    if (number > 0) {
        cout << "The entered number is positive." << endl;
    } else if (number < 0) {
        cout << "The entered number is negative." << endl;
    } else {
        cout << "The entered number is zero." << endl;
    }

    return 0;
}
