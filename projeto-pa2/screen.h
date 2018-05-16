#ifndef SCREEN_H
#define SCREEN_H
#include <ostream>
#include <vector>
#include <istream>

using namespace std;

class Screen
{
protected:

    int nlin, ncol;
    char brush;
    vector< vector<char> > mat;

public:

    void setScreen(int _nlin, int _ncol);
    int  getScreenX();
    int  getScreenY();
    void setPixel(int x, int y);
    void clear();
    void setBrush(char _brush);
    friend ostream& operator<<(ostream &os, Screen &t);

};

#endif // SCREEN_H
