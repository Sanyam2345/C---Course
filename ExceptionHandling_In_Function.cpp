#include <iostream>
using namespace std;

double calculate_avg (int sum, int total) {
    if (total == 0)
        throw 0;
    return static_cast<double>(sum)/total;
}

int main() {
    double average {0};
    int total {0}, sum {0};
    cout << "Enter sum: ";
    cin >> sum;
    cout << "Enter total number of numbers: ";
    cin >> total;
    try {
        average = calculate_avg(sum,total);
        cout << average << endl;
    }
    catch (int &ex) {
        cerr << "Trying to divide by zero." << endl;
    }
    cout << "Program continues...." << endl;
    // cout << "Average = " << average << endl;
    return 0;
}