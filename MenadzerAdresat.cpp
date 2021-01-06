#include <iostream>
#include "MenadzerAdresat.h"

using namespace std;

vector <Adresat> MenadzerAdresat:: pobierzAdresatowZalogowanego()
{

    adresaci = plikAdresata.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    return adresaci;

}



Adresat MenadzerAdresat:: podajDaneNowegoAdresata()
{
   Adresat adresat;

    int idOstatniegoAdresata = plikAdresata.pobierzIdOstatniegoAdresata();
    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(ID_ZALOGOWANEGO_UZYTKOWNIKA);

    cout << "Podaj imie: ";
    adresat.ustawImie(metoda.wczytajLinie());
    adresat.ustawImie(metoda.zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImie()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(metoda.wczytajLinie());
    adresat.ustawNazwisko(metoda.zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwisko()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawTelefon(metoda.wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(metoda.wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(metoda.wczytajLinie());

    return adresat;
}




void MenadzerAdresat:: dodajAdresata()
{
    Adresat adresat;
    int idOstatniegoAdresata = plikAdresata.pobierzIdOstatniegoAdresata();


    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    plikAdresata.dopiszAdresataDoPliku(adresat);
    int noweOstatnie = plikAdresata.pobierzIdOstatniegoAdresata()+1;
    plikAdresata.ustawIdOstatniegoAdresata(noweOstatnie);
}


int MenadzerAdresat:: idOstatniegoAdresataOkreslonaPodczasWczytywaniaPoczatkowego()
{
    int numer = adresaci.back().pobierzId();
    return numer;

}
