#include <iostream>
using namespace std;

int smallestNumber(int a, int b);

int main()
{
    smallestNumber(1, 2);
    smallestNumber(2, 1);
    smallestNumber(5, 5);
}

int smallestNumber(int a, int b) {
    if (a < b) {
        cout << a << " is the smallest" << endl;
    }
    else if (b < a) {
        cout << b << " is the smallest" << endl;
    }
    else if (a == b) {
        cout << "Both numbers are the same " << "(" << a << "," << b << ")" << endl;
    }
    else {
        cout << "i dont understand" << endl;
    }

    return 0;
}