#include <iostream>
using namespace std;

int main()
{
    char userStatus;
    int userGameChoice;

    cout << "please tell me your status with 's' for student, 't' for teacher or 'o' for other:" << endl;
    cin >> userStatus;

    cout << "which game would you like? 1 or 2: " << endl;
    cin >> userGameChoice;

    if (userStatus == 's') {
        if (userGameChoice == 1) {
            cout << "you get a 20% discount" << endl;
        }
        else if (userGameChoice == 2) {
            cout << "you get a 10% discount" << endl;
        }
        else {
            cout << "Sorry, that is not an option" << endl;
        }
    }
    if (userStatus == 't') {
        if (userGameChoice == 1) {
            cout << "you get a 20% discount" << endl;
        }
        else if (userGameChoice == 2) {
            cout << "you get a 10% discount" << endl;
        }
        else {
            cout << "sorry, that is not an option" << endl;
        }
    }
    else {
        cout << "You dont get a discount" << endl;
    }
}