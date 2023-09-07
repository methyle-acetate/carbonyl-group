#show by NUH
#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    int marks = 44;
    char name[] = "Haider Ali Amjad";
    float average = 18.09;
    cout << "The data type of marks is " << typeid(marks).name() << endl;
    cout << "The data type of name is " << typeid(name).name() << endl;
    cout << "The data type of average is " << typeid(average).name() << endl;
    return 0;
}
