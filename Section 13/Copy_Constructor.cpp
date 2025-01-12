#include <iostream>
using namespace std;

class Player {
    string name;
    int health;
    int xp;
    public:
    Player (string name_val = "None", int health_val = 0, int xp_val = 0);
    Player (const Player &source);
    void Display();
};

Player :: Player (string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val} {
    cout << "Three-args constructor" << endl;
}

Player :: Player (const Player &source) 
    :name{source.name}, health{source.health}, xp{source.xp} {}

void Player :: Display() {
    cout << "Name: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "XP: " << xp << endl;
}

int main() {
    Player Sanyam {"Sanyam", 100,50};
    Player Sanyam2 (Sanyam);
    Sanyam.Display();
    Sanyam2.Display();
    return 0;
}