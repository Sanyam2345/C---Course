 // Created by sanya on 7/13/2024.
 //
 //
 #include <iostream>
 #include <vector>
 using namespace std;
 
 int main() {
     // Voting Eligibility by Conditional Operator
     int age {};
     cout << "We will check whether the person can vote or not using Conditional Operator" << endl;
     cout << "Enter age:";
     cin >> age;
     // cout << "You can " << ((age > 17)?"Vote":"not Vote") << endl;
     vector <string> result {(age > 17)?"Yes you can vote":"Sorry you are not eligible to vote"};
     cout << result.at(0) << endl;
     return 0;
 }
