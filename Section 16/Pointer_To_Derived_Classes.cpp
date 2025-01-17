#include <iostream>
using namespace std;

class BaseClass {
    public:
        int varbase;
        void basedisplay() {
            cout << "Value of varbase is: " << varbase << endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display() {
            basedisplay();
            cout << "Value of var_derived is: " << var_derived << endl;
        }
};

int main() {
    BaseClass * base_class_ptr;
    BaseClass objbase;
    DerivedClass objderived;
    base_class_ptr = &objderived;

    base_class_ptr->varbase = 34;
    base_class_ptr->basedisplay();
    // base_class_ptr->var_derived = 100; // Throw an error
    
    DerivedClass * derived_class_ptr;
    derived_class_ptr = &objderived;
    derived_class_ptr->var_derived = 100;
    derived_class_ptr->display();
    return 0;
}