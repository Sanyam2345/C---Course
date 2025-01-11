// #include <iostream>
// using namespace std;
//
// class Player {
//     private:
//     string name;
//     int health;
//     int xp;
//     public:
//     Player();
//     Player(string name_val);
//     Player(string name_val, int health_val, int xp_val);
//     void print ();
// };
// Player::Player()
//     :name{NULL},health{0},xp{0} {
// }
// Player::Player(string name_val)
//     :name{name_val},health{0},xp{0} {
// }
// Player::Player(string name_val, int health_val, int xp_val)
//     :name{name_val},health{health_val},xp{xp_val} {
// }
// void Player::print() {
//     cout << "Name: " << name << "\tHealth: " << health << "\tXP: " << xp << endl;
// }
//
// int main () {
//     Player *sanyam = new Player;
//     sanyam->print();
//     delete sanyam;
//
//     Player *sanyam1 = new Player ("Sanyam");
//     sanyam1->print();
//     delete sanyam1;
//
//     Player *sanyam2 = new Player ("Sanyam", 200, 50);
//     sanyam2->print();
//     delete sanyam2;
//
//     return 0;
// }