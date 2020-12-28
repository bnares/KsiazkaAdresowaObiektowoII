#include <iostream>

#ifndef  UZYTKOWNIKMENADZER_H

#define UZYTKOWNIKMENADZER_H
#include "PlikZUzytkownikami.h"
#include <vector>
#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"





using namespace std;

class UzytkownikMenadzer
{
    PlikZUzytkownikami plikZUzytkownikami;
    Uzytkownik podajDaneNowegoUzytkownika(vector <Uzytkownik> &uzytkownicy);
    int pobierzIdNowegoUzytkownika(vector <Uzytkownik> &uzytkownicy);
    bool czyIstniejeLogin(vector <Uzytkownik> &uzytkownicy, string login);
public:
    vector <Uzytkownik> uzytkownicy;
    UzytkownikMenadzer(string nazwaPLikuZUzytkownikami): plikZUzytkownikami(nazwaPLikuZUzytkownikami)
    {
        plikZUzytkownikami.wczytajUzytkownikowZPliku(uzytkownicy);
    }
    void rejestracjaUzytkownika(vector <Uzytkownik> &uzytkownicy);


};

#endif
