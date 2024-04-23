#include <iostream>
#include <cstring>
using namespace std;

class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    { // constructor
        title = s;
        rating = r;
    }
    virtual void display()=0; //do nothing function -->pure virtual function
 
};
class cwhvideo : public cwh
{
    float videolength;

public:
    cwhvideo(string s, float r, float vl) : cwh(s, r)
    { // constructor from derived class s& h is send to base class constructor whic will run them
        videolength = vl;
    }
    void display()
    {
        cout << "this is an amazing video with title:" << title << endl;
        cout << "RATINGS: " << rating << "out of 5" << endl;
        cout << "video length: " << videolength << endl;
    }
};
class cwhtext : public cwh
{
    int words;

public:
    cwhtext(string s, float r, int wc) : cwh(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "this is an amazing text tutorial with title:" << title << endl;
        cout << "RATINGS: " << rating << "out of 5" << endl;
        cout << "word length: " << words << endl;
    }
};
int main()
{

    string title;
    float rating, videolen;
    int words;

    title = "Django tutorial";
    videolen = 4.56;
    rating = 4.5;

    cwhvideo djvideo(title, rating, videolen);

    // djvideo.display();
    title = "Django tutorial text";
    words = 456;
    rating = 4;

    cwhtext djtext(title, rating, words);

    // djtext.display();
    cwh *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    // if virtual is removed the display function of cwh class is called not the indivisual display
    return 0;
}