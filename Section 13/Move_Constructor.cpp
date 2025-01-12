#include <iostream>
using namespace std;

class Move {
    private:
    int *data;
    public:
    void set_data_values(int d);
    int get_data_value();
    Move(int d);
    Move (const Move &source);
    Move (Move &&source);
    ~Move();
};

void Move::set_data_values(int d) {
    *data = d;
}

int Move::get_data_value() {
    return *data;
}

Move :: Move(int d) {
    data = new int;
    *data = d;
    cout << "Constructor Called" << endl;
}

Move :: Move (const Move &source) {
    data = new int;
    *data = *source.data;
    cout << "Copy Constructor - Deep Copy" << endl;
}

Move :: Move (Move &&source) {
    data = new int;
    *data = *source.data;
    source.data = nullptr;
}

Move :: ~Move() {
    delete data;
    cout << "Destructor Called" << endl;
}

int main() {
    Move obj1 {100};
    Move obj2 {obj1};
    cout << obj1.get_data_value() << endl;
    cout << obj2.get_data_value() << endl;
    Move obj3 {Move {200}};
    cout << obj3.get_data_value() << endl;
    obj3.set_data_values(300);
    return 0;
}