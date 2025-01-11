#include <iostream>
using namespace std;
int main()
{
    // for integers
    // int num1 {}, num2 {};
    // cout << "Enter two numbers:";
    // cin >> num1 >> num2;
    cout << boolalpha; // Print the result
    // cout << "Comparison Test (Equals): " << (num1 == num2) << endl;
    // cout << "Comparison Test (Not Equals): " << (num1 != num2) << endl;
    // for char
    // char char1 {}, char2 {};
    // cout << "Enter two alphabets:";
    // cin >> char1 >> char2;
    // cout << boolalpha;
    // cout << "Comparison Test (Equals): " << (char1 == char2) << endl;
    // cout << "Comparison Test (Not Equals): " << (char1 != char2) << endl;
    // for doubles
    // double num1 {}, num2 {};
    // cout << "Enter two numbers:";
    // cin >> num1 >> num2;
    // cout << boolalpha;
    // cout << "Comparison Test (Equals): " << (num1 == num2) << endl;
    // cout << "Comparison Test (Not Equals): " << (num1 != num2) << endl;
    // for integers and double mixed
    int num1 {};
    double num2 {};
    cout << "Enter two numbers:";
    cin >> num1 >> num2;
    cout << boolalpha;
    cout << "Comparison Test (Equals): " << (num1 == num2) << endl;
    cout << "Comparison Test (Not Equals): " << (num1 != num2) << endl;
    // It will perform conversion and convert integer into double
    return 0;
}

