#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input a character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the entered character is a vowel or consonant using a switch statement
    switch (ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << ch << " is a vowel." << endl;
            break;
        default:
            cout << ch << " is a consonant." << endl;
    }

    return 0;
}
