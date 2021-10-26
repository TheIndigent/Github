#include <iostream>
using namespace std;

int main()
{
	int num1 = 12;
	int num2 = 5;
	int num3 = 7;
	bool a = true;

	if (a) {
		num1++;
		num2 += 5;
	}
	num3 *= 2;

	cout << (num3) << endl;
}