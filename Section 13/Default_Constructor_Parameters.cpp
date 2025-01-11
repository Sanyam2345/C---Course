 #include <bits/stdc++.h>
 // #include "local.h"
 using namespace std;

 class Player {
 private:
 	string name;
 	int health;
 	int xp;
 public:
 	Player(string name_val = "None", int health_val = 0, int xp_val = 0);

 };

 Player::Player (string name_val, int health_val, int xp_val)
 	:name{name_val}, health {health_val}, xp{xp_val} {
 		cout << "Constructor Initialised" << endl;
 		cout << name << " " << health << " " << xp << endl;
 	}

 int main() {
 	// local();
 	string name;
 	Player empty;
 	Player Sanyam("Sanyam");
 	Player Villain ("Villain",100,50);
 	Player Hero ("Hero",200);
 	return 0;
 }