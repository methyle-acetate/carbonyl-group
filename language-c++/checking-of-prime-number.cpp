#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    // Check for prime
    bool isPrime = num > 1;  // Assume it's prime if num > 1


         if (num % 2 == 0) {
             isPrime = false;

         }


    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else if(num ==2){
    	 cout << num << " is a prime number." << endl;
	}else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
