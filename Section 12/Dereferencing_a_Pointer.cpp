#include <iostream>
using namespace std;

int main ()
{
    int score {100};
    int *score_ptr {&score};
    cout << *score_ptr << endl;
    *score_ptr = 200;
    cout << *score_ptr << endl;
    cout << score << endl;
    double high_temp {100.7};
    double low_temp {37.4};
    double *temp_ptr {&high_temp};
    cout << *temp_ptr << endl;
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl;
    string name {"Sanyam"};
    string *string_ptr {&name};
    cout << *string_ptr << endl;
    name = "Stuti";
    cout << *string_ptr << endl;
    return 0;
}