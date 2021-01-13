#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include<fstream>
#include <algorithm>
#include "PlikTekstowy.h"


using namespace std;

class MetodyPomocnicze
{
    public:

        static string wczytajLinie();
        static string konwerjsaIntNaString(int liczba);

        static int konwersjaStringNaInt(string liczba);
        static string pobierzLiczbe(string tekst, int pozycjaZnaku);
        static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
        static char wczytajZnak();
        static int wczytajLiczbeCalkowita();


};










#endif // METODYPOMOCNICZE_H
