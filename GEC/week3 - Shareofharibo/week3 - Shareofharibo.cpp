#include <iostream>
using namespace std;

int main()
{
    int haribo = 40;
    int students = 14;

    int perStudent = haribo / students;
    int leftOver = haribo - (students * perStudent);

    cout << "Each student will have " << perStudent << " left" << endl;
    cout << "there will be " << leftOver << " left over" << endl;
}