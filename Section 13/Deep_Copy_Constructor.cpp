#include <iostream>
using namespace std;

class Deep {
    private:
    int *data;
    public:
    Deep(int d);
    Deep (const Deep &source);
    void Display ();
    ~Deep(); // Remove this line
};

Deep::Deep(int d) {
    data = new int;
    *data = d;
    cout << "Constructor Called" << endl;
}

Deep::Deep(const Deep &source) {
    data = new int;
    *data = *source.data;
    cout << "Copy Constructor - Deep Copy" << endl;
}

Deep::~Deep() {
    delete data;
    cout << "Destructor Called" << endl;
}

void  Deep::Display () {
    cout << *data << endl;
}

int main() {
    Deep obj1 {100};
    Deep obj2 {obj1};
    obj1.Display();
    obj2.Display();
    return 0;
}