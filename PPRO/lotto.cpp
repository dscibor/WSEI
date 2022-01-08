#include <ctime>
#include <iostream>
#include <stdlib.h>

using namespace std;

bool sprawdz(int liczby[], int szukana_wartosc, int wielkosc_tablicy)
{
    for (int i = 0; i < wielkosc_tablicy; i++)
    {
        if (liczby[i] == szukana_wartosc)
            return true;
    }
    return false;
}

int main()

{

    srand(time(NULL));
    int liczba_liczb = 6;
    int liczby[liczba_liczb];
    int wylosowana_liczba;

    for (int i = 0; i < 6; i++)
    {
        wylosowana_liczba = (rand() % 49) + 1;
        while (sprawdz(liczby, wylosowana_liczba, liczba_liczb))
        {
            wylosowana_liczba = (rand() % 49) + 1;
        }

        liczby[i] = wylosowana_liczba;
        cout << "\n Wylosowana liczba: " << liczby[i] << endl;
    }

    cout << "\n Koniec losowania!" << endl;

    return 0;
}