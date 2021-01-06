#ifndef INTERFEJS_H

#define INTERFEJS_H
#include "MetodyPomocnicze.h"
#include <iostream>


using namespace std;


class Interfejs
{
        MetodyPomocnicze metoda;
    public:
        char wybierzOpcjeZMenuGlownego();
        char wybierzOpcjeZMenuUzytkownika();

};









#endif // INTERFEJS_H
