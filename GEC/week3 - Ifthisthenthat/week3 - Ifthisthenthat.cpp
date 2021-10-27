#include <iostream>
using namespace std;

int main()
{
    int rain = 1;
    int snow = 2;
    int userAnswer1;
    int userAnswer2;

    cout << "Please tell me if its raining with 1 or snowing with 2: " << endl;
    cin >> userAnswer1;

    if (userAnswer1 == 1) {
        cout << "you have selected: raining" << endl;
    }
    else if(userAnswer1 == 2) {
        cout << "you have selected: snowing" << endl;
    }
    cout << "now tell me what the temperature is in celsius: " << endl;
    cin >> userAnswer2;

    if (userAnswer1 == 1) {
        if (userAnswer2 > 15) {
            cout << "wear a light raincoat" << endl;
        }
        else {
            cout << "wear a thick coat" << endl;
        }
    }
    else {
        cout << "have a nice day" << endl;
    }

    if (userAnswer1 == 2) {
        if (userAnswer2 > 5) {
            cout << "wear something warm" << endl;
        }
        else if (userAnswer2 > 0) {
            cout << "wrap up well" << endl;
        }
        else {
            cout << "stay home" << endl;
        }
    }
    else {
        cout << "have a nice day" << endl;
    }
}