#include <iostream>
#include <string>
using namespace std;


int main()
{
	char user_input_array[20];
	char * token;

	cout << "please enter your first initial, second initial and last name: " << endl;
	cin.getline(user_input_array, 20);
	token = strtok(user_input_array, " ");

	while (token != NULL) {
		cout << ("user_input_array\n", token) << endl;
		token = strtok(NULL, " ");
	}
	return 0;
}