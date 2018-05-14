#include "screen.h"
#include <iostream>

using namespace std;

void Screen::setScreen(int _nlin, int _ncol)
{
    nlin = _nlin;
    ncol = _ncol;
    mat = vector<vector<char>>(nlin, vector<char>(ncol,' '));
}

int Screen::getScreenX()
{
    return ncol;
}

int Screen::getScreenY()
{
    return nlin;
}

void Screen::setPixel(int x, int y)
{
    mat[x][y]= brush;
}

void Screen::clear()
{
    mat = vector<vector<char>>(nlin, vector<char>(ncol,' '));
}

void Screen::setBrush(char _brush)
{
    brush = _brush;
}

istream& operator>>(istream &is,  Screen &t)
{
    for(int i=0; i<t.getScreenY(); i++){
        for(int j=0; j<t.getScreenX(); j++){
            is >> t.mat[i][j];
        }

    }
    return is;
}

ostream& operator<<(ostream &os, Screen &t)
{
    for(int i=0; i<t.getScreenY(); i++){
        for(int j=0; j<t.getScreenX(); j++){
            os << t.mat[i][j]<<" ";
        }
        os << endl;
    }
    return os;
}

