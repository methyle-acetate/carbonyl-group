#include<iostream>

using namespace std;

 int main(){
 	int num;
 		cout<< "enter a number having three digits ";
 	cin >> num;
 if(num<=999 && num>=100){
 	int digit_1 = num%10;
	int digit_2 =(num/10)%10;
	int digit_3= num/100;
	cout <<"The reverse number is :"<<digit_1<<digit_2<<digit_3<< endl;
 		cout<<"number is valid"<<endl;
	 }else{
	 	cout<<"please enter a valid number";
	 }
 	return 0;
 }
