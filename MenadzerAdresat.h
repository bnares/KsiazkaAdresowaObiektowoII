#ifndef MENADZERADRESAT_H
#define MENADZERADRESAT_H


#include <iostream>
#include <vector>
#include "Adresat.h"
#include "PlikiAdresata.h"
#include "MetodyPomocnicze.h"

using namespace std;


class MenadzerAdresat
{
    vector <Adresat> adresaci;
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    PlikiAdresata plikAdresata;
    MetodyPomocnicze metoda;
    vector <Adresat> pobierzAdresatowZalogowanego();
    Adresat podajDaneNowegoAdresata();
    int idOstatniegoAdresataOkreslonaPodczasWczytywaniaPoczatkowego();

    public:
        MenadzerAdresat(int idZalogowanego, string nazwaPlikuAdresata)
            : ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanego), plikAdresata(nazwaPlikuAdresata)
            {
                adresaci = pobierzAdresatowZalogowanego();

            };
        void dodajAdresata();
};

#endif // MENADZERADRESAT_H
