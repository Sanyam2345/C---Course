#include <iostream>
#include "Player.h"
using namespace std;

Player :: Player (string name_val, int health_val, int xp_val) 
    :name{name_val}, health{health_val}, xp{xp_val} {
        num_players++;
}

int Player :: num_players {0};
int Player :: get_num_players () {
    return num_players;
}

Player :: ~Player() {
    num_players--;
    cout << "No. of Players: " << num_players << endl;
}

string Player :: get_name () const {
    return name;
}

void Player :: set_name (string &name_val) {
    name = name_val;
}

int main() {
    Player Sanyam {"Sanyam",100,50};
    cout << "No. of Players: " << Player::get_num_players() << endl;
    Player Sanyam2 {"Sanyam2",100,50};
    cout << "No. of Players: " << Player::get_num_players() << endl;
    return 0;
}