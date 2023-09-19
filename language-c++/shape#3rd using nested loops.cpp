#include<stdio.h>
#include<iostream>

using namespace std;
int main(){


	 int rows = 5;   // Number of rows
    int cols = 5;   // Number of columns

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";                      
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }
	


	return 0;
}
