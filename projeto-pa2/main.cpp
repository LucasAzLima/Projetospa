
#include "figura.h"
#include "circulo.h"
#include "reta.h"
#include "retangulo.h"
#include "screen.h"
#include "ponto.h"
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    Screen s;

    vector <figura*> figuras;
    figuras.push_back(new circulo);
    figuras.push_back(new retangulo);
    figuras.push_back(new reta);

    ifstream fin;
    ofstream fout;

    string ss;
    fin.open("E:\\projeto-pa2\\figura.txt");
    fout.open("E:\\projeto-pa2\\figuradese.txt");


    while(fin.good()){
        getline(fin, ss);
        if(fin.good()){
            string cmd;
            stringstream sstream(ss);
            sstream >> cmd;
            if(cmd.compare("dim")==0){
                int x, y;
                sstream >> x >> y;

                s.setScreen(x,y);

            }
            if(cmd.compare("brush")==0){
                char b;
                sstream >> b;
                s.setBrush(b);
            }
            if(cmd.compare("reta")==0){
                int x,y,x2,y2;
                sstream >> x >> y >> x2 >> y2;
                if(x == x2 && y == y2){
                    cout<<"parametro invalido"<<endl;
                } else {
                    figuras[2]->setparametrosreta(x,y,x2,y2);
                    figuras[2]-> draw(s);
                    fout << s;
                    cout<<endl<<endl;
                }

            }
            else if(cmd.compare("retangulo")==0){
                int altura, largura, x, y, fillmodeR;
                sstream >> x >> y >> altura >> largura >> fillmodeR;
                if( altura!=0 && altura!=0) {
                    figuras[1]->setparametrosretangulo(x, y, altura, largura, fillmodeR);
                    figuras[1]->draw(s);
                    fout << s;
                    cout<<endl<<endl;}
                else {
                    cout<<"parametro invalido"<<endl;
                }
            }
            else if(cmd.compare("circulo")==0){

                int raio, fillmodeC, x, y;
                sstream >> x >> y >> raio >> fillmodeC;
                if(raio >0 && (x - raio)>=0 && (y - raio)>=0 && (x + raio)<=s.getScreenX() && (y + raio)<=s.getScreenY()){
                    figuras[0]->setparametroscirculo(x,y,raio,fillmodeC);
                    figuras[0]-> draw(s);

                }
                else {
                    cout<<"parametro invalido"<<endl;
                }

            }
        }

    }
    fout << s;
    for(int i=0; i<3; i++)delete figuras[i];
    fin.close();
    fout.close();

    return 0;
}
