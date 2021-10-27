#include <iostream>
using namespace std;

int main()
{
	int difficulty;
	cout << "please chose your difficulty:\n"
		"1. Im too young to die!\n"
		"2. Hey, not to rough!\n"
		"3. Hurt me plenty\n"
		"4. Ultra-violent\n"
		"5. Nightmare..." << endl;

	cin >> difficulty;

	switch (difficulty)
	{
	case(1):
		cout << "this is fortnite difficulty" << endl;
		break;
	case(2):
		cout << "thats what she said" << endl;
		break;
	case(3):
		cout << "that doesnt sound good" << endl;
		break;
	case(4):
		cout << "this is for the gamers" << endl;
		break;
	case(5):
		cout << "your asking to rage quit" << endl;
	default:
		cout << "i dont understand" << endl;
	}
}
