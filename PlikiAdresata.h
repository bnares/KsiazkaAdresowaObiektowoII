#ifndef PLIKIADRESATA_H
#define PLIKIADRESATA_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"


using namespace std;


class PlikiAdresata: public PlikTekstowy
{
    int idOstatniegoAdresata;
    const string NAZWA_PLIKU_ADRESACI;


    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int wczytajNumerOstatniegoAdresata();
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    int zwrocNumerIdZLinijki(string linia);
    int pobierzZPlikuIdOstatniegoAdresata();

    public:
        PlikiAdresata(string nazwaPliku)
            : NAZWA_PLIKU_ADRESACI(nazwaPliku), PlikTekstowy(nazwaPliku)
            {

                idOstatniegoAdresata = pobierzZPlikuIdOstatniegoAdresata();
            };

        vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
        string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
        int pobierzIdOstatniegoAdresata();
        void ustawIdOstatniegoAdresata(int nowaLiczba);
        void dopiszAdresataDoPliku(Adresat adresat);
        void usunWybranaLinieWPliku(int idUsuwanegoAdresata);
        void edytujWybranaLinieWPliku(int idEdytowanegoAdresata, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
        void ustawIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata);


};



#endif // PLIKIADRESATA_H
