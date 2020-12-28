#include <iostream>

#ifndef  PLIKZUZYTKONIKAMI_H

#define PLIKZUZYTKONIKAMI_H
#include <vector>
#include <fstream>
#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

class PlikZUzytkownikami
{
    MetodyPomocnicze metoda;
    const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    bool czyPlikJestPusty(fstream &plikTekstowy);

public:
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    PlikZUzytkownikami(string nazwaPliku): NAZWA_PLIKU_Z_UZYTKOWNIKAMI(nazwaPliku){};
    void wczytajUzytkownikowZPliku(vector <Uzytkownik> &uzytkownicy);
};



#endif
