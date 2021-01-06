#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include<fstream>
#include <algorithm>


using namespace std;

class MetodyPomocnicze
{
    public:
        string wczytajLinie();
        string konwerjsaIntNaString(int liczba);
        bool czyPlikJestPusty(fstream &plikTekstowy);
        int konwersjaStringNaInt(string liczba);
        string pobierzLiczbe(string tekst, int pozycjaZnaku);
        string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
        char wczytajZnak();

};










#endif // METODYPOMOCNICZE_H
