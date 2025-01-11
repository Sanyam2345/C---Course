#include <iostream>
using namespace std;

int main() {
    int num {};
    cout << "It is a program in which we will check whether a number is even or odd" << endl;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
        cout << num << " is a even number" << endl;
    else
        cout << num << " is a odd number" << endl;

//    ELSE IF STATEMENT
    int score{};
    cout << "Enter your score:";
    cin >> score;
    if (score > 90)
        cout << "A";
    else if (score > 80)
        cout << "B";
    else if (score > 70)
        cout << "C";
    else if (score > 60)
        cout << "D";
    else
        cout << "F";
    cout << "\nDone";
    return 0;
}
