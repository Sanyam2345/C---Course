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
    Mystring operator+ (const Mystring &rhs) const;
    Mystring operator- () const;
    istream &operator>>(Mystring &obj);
    ostream &operator<<(Mystring &obj);
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

Mystring Mystring::operator+(const Mystring &rhs) const { //Concatenation
    size_t buff_size = strlen(str) + (strlen(rhs.str)+1);
    char *buff = new char [buff_size];
    strcpy(buff, str);
    strcat(buff, rhs.str);
    Mystring temp {buff};
    delete []buff;
    return temp;
}

Mystring Mystring::operator-() const {
    char *buff = new char [strlen(str) + 1];
    strcpy (buff, str);
    for (size_t i = 0; i < strlen(buff); i++) {
        buff[i] = tolower(buff[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

istream &operator>>(istream &is, Mystring &obj) {
    char *buff = new char[1000];
    is >> buff;
    obj = Mystring{buff};
    delete[] buff;
    return is;
}
    

ostream &operator<<(ostream &os, Mystring &obj) {
    os << obj.get_str();
    return os;
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
