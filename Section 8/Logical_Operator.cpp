#include <iostream>
using namespace std;
int main()
{
    int lower {10};
    int upper {20};
    int num{};
    cout << boolalpha;
    cout << "Enter number:";
    cin >> num;
    bool decision {false};
    decision = (num > 10 && num <20);
    cout << num << " is between " << lower << " and " << upper << ": " << decision << endl;
    decision = (num >= 10 && num <= 20);
    cout << num << " is equals or between " << lower << " and " << upper << ": " << decision << endl;
    decision = (num > 10 && num <20);
    cout << num << " is not between " << lower << " and " << upper << ": " << (!decision) << endl;

    return 0;
}

