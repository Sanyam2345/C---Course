#include <iostream>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string t, float r) : title(t), rating(r) {}
    virtual void display() {}
};

class CWHVideo : public CWH
{
private:
    float videolength;

public:
    CWHVideo(string t, float r, float vlen) : CWH(t, r)
    {
        videolength = vlen;
    }
    void display()
    {
        cout << "Title of video is: " << title << endl;
        cout << "Rating of video is: " << rating << " out of 5 star." << endl;
        cout << "Length of video is: " << videolength << " minutes." << endl;
    }
};

class CWHText : public CWH
{
private:
    int words;

public:
    CWHText(string t, float r, int w) : CWH(t, r)
    {
        words = w;
    }
    void display()
    {
        cout << "Title of text is: " << title << endl;
        cout << "Rating of text is: " << rating << " out of 5 stars." << endl;
        cout << "Number of words in Text tutorial: " << words << " words" << endl;
    }
};

int main()
{
    string Title;
    float Rating, vlen;
    int Words;

    // Code With Harry Videos
    Title = "C++ Course";
    Rating = 4.59;
    vlen = 10.5;
    CWHVideo CppVideo{Title, Rating, vlen};

    // Code With Harry Text Tutorials
    Title = "Java Course";
    Rating = 4.10;
    Words = 500;
    CWHText JText{Title, Rating, Words};

    CWH *tut[2];
    tut[0] = &CppVideo;
    tut[1] = &JText;

    tut[0]->display();
    tut[1]->display();

    return 0;
}