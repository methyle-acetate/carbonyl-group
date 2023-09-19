#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
	 int n = 6; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <=  i; j++) {
            cout << " ";
        }

        // Print asterisks
        for (int k = 1; k <= n - i; k++) {
            cout << "*";
        }

        cout << endl;
    }
	return 0;
}
