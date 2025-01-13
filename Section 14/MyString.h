#ifndef _MYSTRING_H
#define _MYSTRING_H
#include <iostream>
#include <cstring>
using namespace std;

class Mystring {
    private:
    char *str;
    public:
    Mystring ();
    Mystring (const char *s);
    Mystring (const Mystring &source);
    ~Mystring ();
    Mystring &operator= (const Mystring &rhs);
    Mystring &operator= (Mystring &&rhs);
    void display () const;
    int get_length () const;
    const char *get_str () const;
};

Mystring::Mystring () {
    str = new char[1];
    *str = '\0';
}

Mystring :: Mystring (const char *s) {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}

Mystring::Mystring (const Mystring &source)
    :str{nullptr} {
        str = new char [strlen(source.str)+1];
        strcpy(str, source.str);
}

Mystring::~Mystring () {
    delete [] str;
}

Mystring &Mystring::operator= (const Mystring &rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

Mystring &Mystring::operator= (Mystring &&rhs) {
    if (this == &rhs) {
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

void Mystring::display () const {
    cout << str << endl;
}

int Mystring::get_length () const {
    return strlen(str);
}

const char *Mystring::get_str () const {
    return str;
}

#endif