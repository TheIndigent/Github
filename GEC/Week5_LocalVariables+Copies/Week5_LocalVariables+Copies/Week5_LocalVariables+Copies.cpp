#include <iostream>
using namespace std;

int addTwo(int num1);

int main()
{
	int myNum = 6;
	cout << "MAIN [BEFORE]: myNum " << myNum << endl;
	addTwo(myNum);
	cout << "MAIN [AFTER]: myNum " << myNum << endl;

	cout << "Completed" << endl;
	return 0;
}

int addTwo(int num1) {
	num1 += 2;

	cout << "FUNCTOIN: num = " << num1 << endl;
	return 0;
}