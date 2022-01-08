#include <iostream>
#include <stdlib.h>

using namespace std;

int oblicz(int b)
{
    int suma = 0;

    for (int i = 1; i <= b; i++)
    {
        suma += i;
    }
    return suma;
}

int main()
{
    int liczba;
    cout << ("Podaj liczbę: \n");
    cin >> liczba;
    cout << oblicz(liczba) << endl;
}
