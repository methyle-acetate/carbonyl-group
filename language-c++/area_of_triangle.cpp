#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
 	
	int a,b,c,s,Area;
	cout<<"Input the values of the sides of the triangle: "<<endl;
	cout<<"a = ";cin>>a;
	cout<<"b = ";cin>>b;
	cout<<"c = ";cin>>c;
	s=(a+b+c)/2;
	Area =sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"The Area of the triangle: "<<Area<<endl;
}
