#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void Student::get_roll_number()
{
    cout << "The Roll number of Student is: " << roll_number << endl;
}

void Student::set_roll_number(int r)
{
    roll_number = r;
}

class Exam : public Student
{
protected:
    float OOPS;
    float DSA;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam::set_marks(float m1, float m2)
{
    OOPS = m1;
    DSA = m2;
}

void Exam::get_marks()
{
    cout << "The marks in OOPS are: " << OOPS << endl;
    cout << "The marks in DSA are: " << DSA << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Your Percentage is: " << (OOPS + DSA) / 2 << "%" << endl;
    }
};

int main()
{
    Result Sanyam;
    Sanyam.set_roll_number(31);
    Sanyam.set_marks(99.99, 99.99);
    Sanyam.display_result();
    return 0;
}