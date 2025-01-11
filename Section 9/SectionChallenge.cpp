// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
//
// int main() {
//     char selection {}, selection2 {};
//     vector<int> vec {10, 20, 30};
//     do {
//         cout << "P - Print numbers\nA - Add a number\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - Quit";
//         cout << endl << "Enter your choice:";
//         cin >> selection;
//         if (selection == 'P' || selection == 'p')
//             if (vec.empty())
//                 cout << "[] - the list is empty";
//             else {
//                 cout << "[ ";
//                 for (auto val: vec)
//                     cout << val << " ";
//                 cout << "]";
//             }
//         else if (selection == 'A' || selection == 'a') {
//             int values {};
//             cout << "Enter a number to add:";
//             cin >> values;
//             vec.push_back(values);
//             cout << "The number is added";
//             for (auto val1: vec)
//                 cout<< endl << val1 << " ";
//         }
//         else if (selection == 'M' || selection == 'm') {
//             int sum {0};
//             int mean {0};
//             for (auto val2: vec)
//                 sum += val2;
//             mean = sum/vec.size();
//             cout << "The mean is: " << mean;
//         }
//         else if (selection == 'S' || selection == 's') {
//             auto minelement = min_element(vec.begin(), vec.end());
//             int smallestnumber = *minelement;
//             cout << "The smallest number is " << smallestnumber;
//         }
//         else if (selection == 'L' || selection == 'l') {
//             auto maxelement = max_element(vec.begin(), vec.end());
//             int largestnumber = *maxelement;
//             cout << "The largest number is " << largestnumber;
//         }
//         else if (selection == 'Q' || selection == 'q') {
//             cout << "Quiting";
//             break;
//         }
//         cout << "\nDo you want to repeat? (Y/N): ";
//         cin >> selection2;
//         if (selection2 == 'N' || selection == 'n') {
//             cout << "Quiting";
//             break;
//         }
//     } while (selection2 == 'Y' || selection2 == 'y');
//
//     return 0;
// }
