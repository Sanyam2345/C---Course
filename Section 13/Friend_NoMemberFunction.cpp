#include <iostream>
using namespace std;

class Player {
    private:
    friend void display_player (Player &p);
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

void display_player (Player &p) {
    cout << p.name << endl;
    cout << p.health << endl;
    cout << p.xp << endl;
}

int main() {
    Player obj1 {"Sanyam", 100, 50};
    display_player(obj1);
    return 0;
}