#include <iostream>
using namespace std;

class Shallow {
    private:
    int *data;
    public:
    Shallow(int d);
    Shallow (const Shallow &source);
    ~Shallow ();
};

Shallow ::Shallow(int d) {
    data = new int;
    *data = d;
    cout << "Constructor called" << endl;
}

Shallow :: Shallow (const Shallow &source) {
    data = source.data;
    cout << "Copy constructor - Shallow copy" << endl;
}

Shallow :: ~Shallow() {
    delete data;
    cout << "Destructor called" << endl;
}

int main() {
    Shallow obj1 {100};
    Shallow obj2 {obj1};
    return 0;
}