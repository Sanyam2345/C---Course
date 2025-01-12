#include <iostream>
using namespace std;

class Player {
    private:
    string name;
    int health;
    int xp;
    public:
    Player (string name_val = "None", int health_val = 0, int xp_val = 0);
    string get_name () const;
    void set_name (string &name_val);
};

Player :: Player (string name_val, int health_val, int xp_val)
    :name{name_val}, health{health_val}, xp{xp_val} {
    cout << "Three-args constructor" << endl;
    }

string Player :: get_name () const {
    return name;
}

void Player :: set_name (string &name_val) {
    name = name_val;
}

int main() {
    const Player Sanyam {"Sanyam", 100, 50};
    cout << Sanyam.get_name() << endl;
    string name = "Sanyam";
    // Sanyam.set_name(name); // ERROR - Cannot call non-const member function on const object
    return 0;
}