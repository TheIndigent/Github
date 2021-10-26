#include <iostream>
using namespace std;

int main()
{
    typedef int Health;
    enum Weapons {
        SWORD = 1,
        DAGGER,
        MACE,
        TWIN_SWORDS,
        SAMURAI,
        WIZARD_STAFF,
        FIRE_POSION,
        ICE_BLADE,
        SMALL_KNIFE
    };

    Health health = 13000;

    cout << ("my current health is ") << health << endl;

    Weapons weapon = Weapons::SAMURAI;

    cout << ("my ID weapon of choice is ") << weapon << endl;
}