#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
	int k,l;
	for(k=1;k<=5;k++){
		for(l=1;l<=k;l++){
			cout << "*";
		}
		cout<< "\n";
	}
	return 0;
}
