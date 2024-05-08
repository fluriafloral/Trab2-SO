#include "trem.h"
#include <QtCore>

//Construtor
Trem::Trem(int ID, int x, int y, int velocidade){
    this->ID = ID;
    this->x = x;
    this->y = y;
    this->velocidade = velocidade;
    this->stop = false;
}

void Trem::stopTrain() {
    this->stop = true;
}

void Trem::moveTrain() {
    if (this->stop == true) {
        this->stop = false;
    }
}

void Trem::setSpeed(int velocidade) {
    this->velocidade = 205 - velocidade;
}

//Função a ser executada ao iniciar o programa
void Trem::run(){
    while(true){
        if (!this->stop){
            switch(ID){
            case 1:     //Trem 1
                if (y == 70 && x <440)
                    x+=10;
                else if (x == 440 && y < 190)
                    y+=10;
                else if (x > 170 && y == 190)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            case 2: //Trem 2
                if (y == 70 && x <710)
                    x+=10;
                else if (x == 710 && y < 190)
                    y+=10;
                else if (x > 440 && y == 190)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            case 3: //Trem 3
                if (y == 190 && x <310)
                    x+=10;
                else if (x == 310 && y < 320)
                    y+=10;
                else if (x > 40 && y == 320)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            case 4: //Trem 4
                if (y == 190 && x <580)
                    x+=10;
                else if (x == 580 && y < 320)
                    y+=10;
                else if (x > 310 && y == 320)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            case 5: //Trem 5
                if (y == 190 && x <850)
                    x+=10;
                else if (x == 850 && y < 320)
                    y+=10;
                else if (x > 580 && y == 320)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            default:
                break;
            }
            msleep(velocidade);
        }
    }
}




