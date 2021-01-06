#ifndef KSIAZKA_H
#define KSIAZKA_H

#include <iostream>
#include "MenadzerUzytkownika.h"
#include "MenadzerAdresat.h"

using namespace std;

class Ksiazka
{
    MenadzerUzytkownika menadzerUzytkownika;
    MetodyPomocnicze metoda;
    MenadzerAdresat *menadzerAdresat;
    const string NAZWA_PLIKU_ADRESACI;

    public:
    Ksiazka(string plikUzytkownicy, string plikAdresaci): menadzerUzytkownika(plikUzytkownicy), NAZWA_PLIKU_ADRESACI(plikAdresaci)
    {
        menadzerAdresat = NULL;
    };

    ~Ksiazka()
    {
        delete menadzerAdresat;
        menadzerAdresat = NULL;
    }

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    int wyswietlZalogowanegoId();
    void dodajNowegoAdresata();
    void zmienHasloUzytkownika();
    int  wyloguj();
};







#endif // KSIAZKA_H
