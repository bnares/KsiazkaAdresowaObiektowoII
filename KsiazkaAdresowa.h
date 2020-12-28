#include <iostream>

#ifndef  KSIAZKAADRESOWA_H

#define KSIAZKAADRESOWA_H
#include "UzytkownikMenadzer.h"
#include "AdresatMenadzer.h"



using namespace std;


class KsiazkaAdresowa
{

    UzytkownikMenadzer uzytkownikMenadzer;
    AdresatMenadzer *adresatMenadzer;

public:
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    KsiazkaAdresowa(string nazwaPlikuZAdresatami, string nazwaPlikuZUzytkownikami)
    : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami), uzytkownikMenadzer(nazwaPlikuZUzytkownikami)
    {
        adresatMenadzer = NULL;
    };

    ~KsiazkaAdresowa()
    {
        delete adresatMenadzer;
        adresatMenadzer = NULL;
    }

    void rejestracjaUzytkownika();
    void logowanieUzytkownika();
    void zmianaHaslaUZytkonika();
    void wylogowywanieUzytkownika();
    void dodajAdresata();

};





#endif
