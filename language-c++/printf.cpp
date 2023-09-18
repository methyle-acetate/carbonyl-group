#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
	int k,l;
	for(k=5;k>=1;k--){
		for(l=1;l<=k;l++){
			cout << k;
		}
		cout<< "\n";
	}

	for(k=5;k>=1;k--){
		for(l=1;l<=k;l++){
			cout << l;
		}
		cout<< "\n";
	}

	for(k=1;k<=5;k++){
		for(l=1;l<=5;l++){
			cout << "*";
		}
		cout<< "\n";
	}


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
	


	  int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print asterisks
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }

        cout << endl;
    }
	return 0;
}