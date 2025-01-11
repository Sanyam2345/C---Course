//
// Created by sanyam on 7/9/2024.
//
#include <iostream>
using namespace std;

int main() {
    int num1{}, num2 {}, num3{};
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;
    int total {0};
    total = num1 + num2 + num3;
    const int count {3};
    double average {0.0};
    average = static_cast<double>(total)/count;
    // average = total/count; it gives integer value
    cout << "The sum of three numbers is: " << total << endl;
    cout << "The average of three numbers is: " << average << endl;
    return 0;
}
