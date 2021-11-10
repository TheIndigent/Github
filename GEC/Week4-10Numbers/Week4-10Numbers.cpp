#include <iostream>
using namespace std;

int Num1;
int Num2;
int Num3;

int main()
{
    cout << "please input your first number: ";
    cin >> Num1;
    cout << "please input your second number: ";
    cin >> Num2;
    int Total = (Num1 + Num2) / 2;
    cout << Total;

    cout << "\nplease enter another number: ";
    cin >> Num3;
    int Total2 = Total + Num3;
    cout << "if you add this number with the previous total, you get: " << Total2;
    int Total3 = Total2 / 2;
    cout << "\nthe mean of this number is: " << Total3;
}