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
	return 0;
}
