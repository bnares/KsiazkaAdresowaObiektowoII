#include <iostream>
#include "Ksiazka.h"
#include "Interfejs.h"

using namespace std;

int _main()
{
    Ksiazka ksiazka("Uzytkownicy.txt", "Adresaci.txt");
    //ksiazka.rejestracjaUzytkownika();
    cout<<"Poczatkowe idZalogowanego: ";
    ksiazka.wyswietlZalogowanegoId();
    cout<<endl;
    ksiazka.logowanieUzytkownika();
    cout<<"Koncowe idZalogowanego: ";
    ksiazka.wyswietlZalogowanegoId();
    cout<<endl;
    //ksiazka.dodajNowegoAdresata();
    //ksiazka.dodajNowegoAdresata();
    ksiazka.zmienHasloUzytkownika();



    return 0;
}





int main()
{
    Ksiazka nowaKsiazka("NowiUzytownicy.txt", "NowiAdresaci.txt");
    Interfejs interfejs;
    int zmiennaSterujaca = nowaKsiazka.wyswietlZalogowanegoId();

    while(true)
    {

        if(zmiennaSterujaca==0)
        {

            char wybor = interfejs.wybierzOpcjeZMenuGlownego();
            switch(wybor)
            {
            case '1':
                {
                    nowaKsiazka.rejestracjaUzytkownika();
                    break;
                }
            case '2':
                {
                    nowaKsiazka.logowanieUzytkownika();
                    zmiennaSterujaca = nowaKsiazka.wyswietlZalogowanegoId();
                    break;
                }
            case '9':
                {
                    exit(0);
                }
            }
        }

        else
        {
            char wybor = interfejs.wybierzOpcjeZMenuUzytkownika();
            switch(wybor)
            {
            case '1':
                {
                    nowaKsiazka.dodajNowegoAdresata();
                    break;
                }
            case '7':
                {
                    nowaKsiazka.zmienHasloUzytkownika();
                    break;
                }
            case '8':
                {
                    cout<<"Wylogowywanie..."<<endl;
                    zmiennaSterujaca = nowaKsiazka.wyloguj();

                }
            }
        }
    }





    return 0;
}
