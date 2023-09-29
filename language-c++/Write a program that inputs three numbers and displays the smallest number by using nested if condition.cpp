#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Input three numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Determine the smallest number using nested if conditions
    if (num1 <= num2) {
        if (num1 <= num3) {
            cout << "The smallest number is: " << num1 << endl;
        } else {
            cout << "The smallest number is: " << num3 << endl;
        }
    } else {
        if (num2 <= num3) {
            cout << "The smallest number is: " << num2 << endl;
        } else {
            cout << "The smallest number is: " << num3 << endl;
        }
    }

    return 0;
}
