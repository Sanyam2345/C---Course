#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first_name[10];
    char last_name[10];
    char full_name[20];

    cout << "Enter your first name:";
    cin >> first_name;
    cout << "Enter your last name:";
    cin >> last_name;

    if (strlen(first_name)==strlen(last_name) )
        cout << "Both first name and last name are equal in size " << strcmp(first_name,last_name) << endl;
    else if (strlen(first_name)<strlen(last_name) )
        cout << "First name is shorter than last name " << strlen(last_name)-strlen(first_name)  << endl;
    else if (strlen(first_name)>strlen(last_name))
        cout << "First name is longer than last name " <<  strlen(first_name)-strlen(last_name) << endl;

    cout << "Your first name is " << first_name << " and it has " << strlen(first_name) << " characters" << endl;
    cout << "Your last name is " << last_name << " and it has " << strlen(last_name) << " characters" << endl;

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    cout << "Your full name is " << full_name << " and it has " << strlen(full_name) << " characters." << endl;
    return 0;
}
