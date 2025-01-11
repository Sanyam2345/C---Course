//
// Created by sanya on 7/16/2024.
//
#include <iostream>
using namespace std;

int main () {
    int number {};
    do {
        cout << "Enter a number between 1 and 5: ";
        cin >> number;
    } while (number <= 1 || number >= 5);
    cout << "Thanks!" << endl;

    char selection {};
    do {
        double width {}, height{};
        cout << "Enter width and height separated by a space: ";
        cin >> width >> height;
        double area {width * height};
        cout << "The area is: " << area << endl;
        cout << "Calculate another? (Y/N): ";
        cin >> selection;
    } while (selection == 'Y' || selection == 'y');
    cout << "Thanks!" << endl;
    return 0;
}
