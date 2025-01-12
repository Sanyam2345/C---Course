#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>
using namespace std;
class Player {
    private:
    string name;
    int health;
    int xp;
    static int num_players;
    public:
    Player (string name_val = "None", int health_val = 0, int xp_val = 0);
    // Player (const Player &source);
    static int get_num_players ();
    ~Player ();
    string get_name () const;
    void set_name (string &name_val);
};
#endif