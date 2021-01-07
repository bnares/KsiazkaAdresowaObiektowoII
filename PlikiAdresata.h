#ifndef PLIKIADRESATA_H
#define PLIKIADRESATA_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Adresat.h"
#include "MetodyPomocnicze.h"


using namespace std;


class PlikiAdresata
{
    int idOstatniegoAdresata;
    const string NAZWA_PLIKU_ADRESACI;
    MetodyPomocnicze metoda;

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    int wczytajNumerOstatniegoAdresata();

    public:
        PlikiAdresata(string nazwaPliku)
            : NAZWA_PLIKU_ADRESACI(nazwaPliku)
            {

                idOstatniegoAdresata = wczytajNumerOstatniegoAdresata();
            };

        vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
        int pobierzIdOstatniegoAdresata();
        void ustawIdOstatniegoAdresata(int nowaLiczba);
        void dopiszAdresataDoPliku(Adresat adresat);

};



#endif // PLIKIADRESATA_H
