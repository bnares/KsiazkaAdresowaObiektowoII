#ifndef PLIKIUZYTKOWNIKA_H
#define PLIKIUZYTKOWNIKA_H

#include <iostream>
#include <vector>
#include "Uzytkownicy.h"
#include "MetodyPomocnicze.h"
#include <fstream>
#include "PlikTekstowy.h"

using namespace std;

class PlikiUzytkownika: public PlikTekstowy
{
    const string NAZWA_PLIKU_UZYTKOWNICY;
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    MetodyPomocnicze metoda;

    public:
        PlikiUzytkownika(string nazwaPlikuUZytkownicy): NAZWA_PLIKU_UZYTKOWNICY(nazwaPlikuUZytkownicy), PlikTekstowy(nazwaPlikuUZytkownicy){};
        void wczytajUzytkownikowZPliku(vector <Uzytkownik> &uzytkownicy);
        void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
        void zapiszWszystkichUzytkownikowDoPliku(vector <Uzytkownik> &uzytkownicy);
};





#endif // PLIKIUZYTKOWNIKA_H
