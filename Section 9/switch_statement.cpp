// //
// // Created by sanya on 7/13/2024.
// //
// #include <iostream>
// using namespace std;
//
// int main() {
//     // basic example
//     int selection1 {};
//     cout << "Enter a number: ";
//     cin >> selection1;
//     switch (selection1) {
//         case 1:
//             cout << "1 selected";
//             break;
//         case 2:
//             cout << "2 selected";
//             break;
//         case 3:
//             case 4:
//             cout << "3 or 4 selected";
//             break;
//         default:
//             cout << "1,2,3,4 NOT SELECTED";
//     }
//
//     // fall through example
//     int selection2 {};
//     cout << "\nEnter a number: ";
//     cin >> selection2;
//     switch (selection2) {
//         case 1:
//             cout << "1 selected";
//         case 2:
//             cout << "2 selected";
//         case 3:
//             cout << "3 selected";
//             case 4:
//             cout << "4 selected";
//         break;
//         default:
//             cout << "1,2,3,4 NOT SELECTED";
//         // It will generate all cases after it until the break statement is met
//     }
//
//     // with an enumeration
//     enum color {
//         red, green, blue
//     };
//     color screen_color {green};
//     cout << endl;
//     switch (screen_color) {
//         case red:
//             cout << "Red";
//         break;
//         case green:
//             cout << "Green";
//         break;
//         case blue:
//             cout << "Blue";
//         break;
//         default:
//             cout << "Should never execute";
//     }
//     return 0;
// }
