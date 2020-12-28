#ifndef  UZYTKOWNIK_H

#define UZYTKOWNIK_H


using namespace std;

class Uzytkownik
{
    int id;
    string login;
    string haslo;

public:
    Uzytkownik(string login = "", string haslo = "", int id = 1)
    {
        this -> id = id;
        this -> login = login;
        this -> haslo = haslo;
    }
    void ustawID(int noweId);
    void ustawLogin(string nowyLogin);
    void ustawHaslo(string noweHaslo);

    int pobierzID();
    string pobierzLogin();
    string pobierzHaslo();
};

#endif
