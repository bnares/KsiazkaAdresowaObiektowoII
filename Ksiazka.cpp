#include <iostream>
#include "Ksiazka.h"

using namespace std;




void Ksiazka:: rejestracjaUzytkownika()
{
    menadzerUzytkownika.rejestracjaUzytkownika(menadzerUzytkownika.uzytkownicy);

}


void Ksiazka:: logowanieUzytkownika()
{
    menadzerUzytkownika.logowanieUzytkownika(menadzerUzytkownika.uzytkownicy);
    if(menadzerUzytkownika.pobierzIdZalogowanego() != 0)
    {
        menadzerAdresat = new MenadzerAdresat(menadzerUzytkownika.pobierzIdZalogowanego(), NAZWA_PLIKU_ADRESACI);
    }
}


int Ksiazka:: wyswietlZalogowanegoId()
{
    return menadzerUzytkownika.pobierzIdZalogowanego();
}


void Ksiazka:: dodajNowegoAdresata()
{
    menadzerAdresat -> dodajAdresata();
}


void Ksiazka:: zmienHasloUzytkownika()
{
    menadzerUzytkownika.zmianaHaslaZalogowanegoUzytkownika();

}



int Ksiazka:: wyloguj()
{
   return menadzerUzytkownika.wylogowywanie();
}




