#include <iostream>
using namespace std;

int main()
{
    int num = 1;

    cout << "num = " << num << endl;
    cout << "Increment Operator before num = " << ++num << endl;
    cout << "num after = " << num << endl;

    num = 1;

    cout << "num = " << num << endl;
    cout << "Increment Operator after num = " << num++ << endl;
    cout << "num afer = " << num << endl;

    num = 1;

    cout << "num = " << num << endl;
    cout << "Decrement Operator after num = " << num-- << endl;
    cout << "num after = " << num << endl;

    num = 1;

    cout << "mum = " << num << endl;
    cout << "decrement Operator before num = " << --num << endl;
    cout << "num after = " << num << endl;
}