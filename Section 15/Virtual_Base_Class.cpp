#include <iostream>
using namespace std;
/*
                                      Student
                                         |
                                --------------------
                                |                  |
                         Academic Score        Physical Score
                               |                    |
                               ----------------------
                                         |
                                      Result
*/
class Student
{
protected:
    int roll_number;

public:
    void set_roll(int r)
    {
        roll_number = r;
    }
    void get_roll(void)
    {
        cout << "Roll Number of Student is: " << roll_number << endl;
    }
};

class Academic_Score : virtual public Student
{
protected:
    float Maths;
    float Physics;

public:
    void set_marks(float m, float p)
    {
        Maths = m;
        Physics = p;
    }
    void get_marks(void)
    {
        cout << "Marks Of Students in: " << endl
             << "Maths: " << Maths << endl
             << "Physics: " << Physics << endl;
    }
};

class Physical_Score : virtual public Student
{
protected:
    int score;

public:
    void set_score(int s)
    {
        score = s;
    }
    void get_score()
    {
        cout << "Physical score of Student is: " << score << endl;
    }
};

class Result : public Academic_Score, public Physical_Score
{
    int total;

public:
    void Display()
    {
        total = Maths + Physics + score;
        get_roll();
        get_marks();
        get_score();
        cout << "Total Score of Student is: " << total << endl;
    }
};

int main()
{
    Result sanyam;
    sanyam.set_roll(31);
    sanyam.set_marks(95.0, 96.5);
    sanyam.set_score(9);
    sanyam.Display();
    return 0;
}