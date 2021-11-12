#include <iostream>
using namespace std;

int Num;

int main()
{
	while (true) {
		cout << "enter a number between 1 and 10: ";
		cin >> Num;

		if (Num >= 1 && Num <= 10) {
			for (int i = 0; i < Num; i++) {
				for (int o = i; o < Num; o++) {
					cout << "*";
				}
				cout << "\n";
			}

			return 0;
		}
		else {
			cout << "this is not a number between 1 and 10!" << endl;
		}
	}
}