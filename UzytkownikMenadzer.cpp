#include <iostream>
#include "UzytkownikMenadzer.h"

using namespace std;



void UzytkownikMenadzer:: rejestracjaUzytkownika(vector <Uzytkownik> &uzytkownicy)
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika(uzytkownicy);

uzytkownicy.push_back(uzytkownik);

plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

cout << endl << "Konto zalozono pomyslnie" << endl << endl;
system("pause");
}




int UzytkownikMenadzer:: pobierzIdNowegoUzytkownika(vector <Uzytkownik> &uzytkownicy)
{
   if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzID() + 1;
}


bool UzytkownikMenadzer:: czyIstniejeLogin(vector <Uzytkownik> &uzytkownicy, string login)
{
    for(int i =0; i<uzytkownicy.size(); i++)
    {
        if(uzytkownicy[i].pobierzLogin()== login)
        {
            cout << endl << "Istnieje uzytkownik o takim loginie." << endl;
            return true;
        }
    }
    return false;
}




Uzytkownik UzytkownikMenadzer:: podajDaneNowegoUzytkownika(vector <Uzytkownik> &uzytkownicy)
{

    Uzytkownik uzytkownik;
    int liczba = pobierzIdNowegoUzytkownika(uzytkownicy);
    uzytkownik.ustawID(liczba);

    MetodyPomocnicze metoda;

    do
    {
        cout << endl << "Podaj login: ";
        uzytkownik.ustawLogin(metoda.wczytajLinie());


    } while (czyIstniejeLogin(uzytkownicy, uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: ";
    uzytkownik.ustawHaslo( metoda.wczytajLinie());

    return uzytkownik;

}









