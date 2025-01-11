#include <iostream>
using namespace std;

int main()
{
    int score {10};
    double high_temp {100.7};
    double low_temp {37.2};
    double *temp_ptr;
    int *score_ptr {nullptr};
    score_ptr = &score;
    cout << *score_ptr << endl;
    temp_ptr = &high_temp;
    cout <<* temp_ptr << endl;
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl;
    temp_ptr = nullptr;
    cout << *temp_ptr << endl;
    return 0;
}
