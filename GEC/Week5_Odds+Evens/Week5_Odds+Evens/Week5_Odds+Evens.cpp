#include <iostream>
using namespace std;

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);
bool EvenOrOdd(int myNum);

int main()
{
	int Num;
	int Num2;
	int Num3;
	int Num4;
	int Num5;
	int Num6;
	int Num7;
	int Num8;
	int Num9;
	int Num10;
	bool Even;
	int numOdd = 0;
	int oddTotal = 0;
	int numEven = 0;
	int evenTotal = 0;


	cout << "please input your first number: ";
	cin >> Num;

	Even = EvenOrOdd(Num);

	if (Even) {
		cout << "The Number is even" << endl;
		numEven = Num;
		evenTotal = evenTotal + numEven;
	}
	else {
		cout << "Your number is odd" << endl;
		numOdd = numOdd + 1;
		oddTotal = oddTotal + Num;
	}

	outputResults(numOdd, oddTotal, numEven, evenTotal);



	cout << "please input your second number: ";
	cin >> Num2;

	Even = EvenOrOdd(Num);

	if (Even) {
		cout << "The Number is even" << endl;
		numEven = Num2;
		evenTotal = evenTotal + numEven;
	}
	else {
		cout << "Your number is odd" << endl;
		numOdd = numOdd + 1;
		oddTotal = oddTotal + Num2;
	}

	outputResults(numOdd, oddTotal, numEven, evenTotal);



	cout << "please input your third number: ";
	cin >> Num3;

	Even = EvenOrOdd(Num);

	if (Even) {
		cout << "The Number is even" << endl;
		numEven = Num3;
		evenTotal = evenTotal + numEven;
	}
	else {
		cout << "Your number is odd" << endl;
		numOdd = numOdd + 1;
		oddTotal = oddTotal + Num3;
	}

	outputResults(numOdd, oddTotal, numEven, evenTotal);





	cout << "please input your fourth number: ";
	cin >> Num4;

	Even = EvenOrOdd(Num);

	if (Even) {
		cout << "The Number is even" << endl;
		numEven = Num4;
		evenTotal = evenTotal + numEven;
	}
	else {
		cout << "Your number is odd" << endl;
		numOdd = numOdd + 1;
		oddTotal = oddTotal + Num4;
	}

	outputResults(numOdd, oddTotal, numEven, evenTotal);



	cout << "please input your fith number: ";
	cin >> Num5;

	Even = EvenOrOdd(Num);

	if (Even) {
		cout << "The Number is even" << endl;
		numEven = Num5;
		evenTotal = evenTotal + numEven;
	}
	else {
		cout << "Your number is odd" << endl;
		numOdd = numOdd + 1;
		oddTotal = oddTotal + Num5;
	}

	outputResults(numOdd, oddTotal, numEven, evenTotal);



	cout << "please input your sixth number: ";
	cin >> Num6;

	Even = EvenOrOdd(Num);

	if (Even) {
		cout << "The Number is even" << endl;
		numEven = Num6;
		evenTotal = evenTotal + numEven;
	}
	else {
		cout << "Your number is odd" << endl;
		numOdd = numOdd + 1;
		oddTotal = oddTotal + Num6;
	}

	outputResults(numOdd, oddTotal, numEven, evenTotal);



	cout << "please input your seventh number: ";
	cin >> Num7;

	Even = EvenOrOdd(Num);

	if (Even) {
		cout << "The Number is even" << endl;
		numEven = Num7;
		evenTotal = evenTotal + numEven;
	}
	else {
		cout << "Your number is odd" << endl;
		numOdd = numOdd + 1;
		oddTotal = oddTotal + Num7;
	}

	outputResults(numOdd, oddTotal, numEven, evenTotal);



	cout << "please input your eigth number: ";
	cin >> Num8;

	Even = EvenOrOdd(Num);

	if (Even) {
		cout << "The Number is even" << endl;
		numEven = Num8;
		evenTotal = evenTotal + numEven;
	}
	else {
		cout << "Your number is odd" << endl;
		numOdd = numOdd + 1;
		oddTotal = oddTotal + Num8;
	}

	outputResults(numOdd, oddTotal, numEven, evenTotal);



	cout << "please input your ninth number: ";
	cin >> Num9;

	Even = EvenOrOdd(Num);

	if (Even) {
		cout << "The Number is even" << endl;
		numEven = Num9;
		evenTotal = evenTotal + numEven;
	}
	else {
		cout << "Your number is odd" << endl;
		numOdd = numOdd + 1;
		oddTotal = oddTotal + Num9;
	}

	outputResults(numOdd, oddTotal, numEven, evenTotal);



	cout << "please input your tenth number: ";
	cin >> Num10;

	Even = EvenOrOdd(Num);

	if (Even) {
		cout << "The Number is even" << endl;
		numEven = Num10;
		evenTotal = evenTotal + numEven;
	}
	else {
		cout << "Your number is odd" << endl;
		numOdd = numOdd + 1;
		oddTotal = oddTotal + Num10;
	}

	outputResults(numOdd, oddTotal, numEven, evenTotal);

}

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal) {
	cout << "Your number of odds is: " << numOfOdd << endl;
	cout << "Your Odds in total is: " << oddTotal << endl;
	cout << "Your number of evens is: " << numOfEven << endl;
	cout << "Your Evens in total is: " << evenTotal << endl;
}
bool EvenOrOdd(int myNum) {
	
	bool even;

	if (myNum % 2 == 0) {
		even = true;
	}
	else {
		even = false;
	}

	return even;
}

