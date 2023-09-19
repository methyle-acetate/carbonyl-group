#include<iostream>

using namespace std;

int main(){
	int a ,b;
	char data;
	
   do{
   	cout<< "enter a number to write a table :";
	cin>> a;
	for(b=1;b<=10;b++){
		cout<<a<<"*"<<b<<"="<<a*b<< endl;
	}
	cout<< "can you write another table then write 'y' ,otherwise 'n':";
	cin>> data;
	}while(data == 'y');
		return 0;
   }





