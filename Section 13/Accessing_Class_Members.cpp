// #include <iostream>
// using namespace std;
//
// class Player {
// public:
//     string name;
//     int health;
//     int xp;
//     void talk(string text_to_say) {cout << text_to_say << endl;};
//     bool is_dead() {
//         if (health == 0)
//             return true;
//         else
//             return false;
//     }
// };
//
// class Account {
// public:
//     string name;
//     double balance;
//     void withdraw (double amount) {balance = balance - amount;}
//     void deposit (double amount) {balance = balance + amount;}
// };
//
// int main () {
//     Player frank;
//     Player hero;
//     frank.name = "Frank";
//     frank.health = 200;
//     frank.xp = 12;
//     frank.talk("Hey I am Frank");
//     Player *enemy = new Player;
//     (*enemy).talk("I will kill you");
//     enemy->xp = 3;
//
//     Account *mary_account = new Account();
//     (*mary_account).balance = 2000.00;
//     mary_account->name = "Mary";
//     mary_account->deposit(200.00);
//     cout << mary_account->balance << endl;
//     mary_account->withdraw(1200.00);
//     cout << mary_account->balance << endl;
//     delete mary_account;
//     delete enemy;
//     return 0;
// }