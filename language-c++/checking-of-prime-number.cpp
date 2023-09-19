#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    // Check for prime
    bool isPrime = num > 1;  // Assume it's prime if num > 1

     for (int i = 2; i * i <= num; i++) {
         if (num % i == 0) {
             isPrime = false;
             break;
         }
     }

    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
