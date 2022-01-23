#include <iostream>
#include <cstdlib>

float pole_trojkata(float podst, float wysok);
float pole_trapezu(float podst_a, float podst_b, float wysok);
float pole_kola(float promien);

using namespace std;

int main()
{
    for (;;)
    {
        cout << "Program oblicza pola powierzchni figur plaskich: \n"
             << "1 - pole trojkata \n"
             << "2 - pole trapezu \n"
             << "3 - pole kola \n"
             << "4 - zakoncz program \n";

        int wybor;

        cout << "Twoj wybor: "; 
        cin >> wybor;

        float a, b, c, wynik;

        switch (wybor)
        {
        case 1:
            cout << "Podaj dlugosc podstawy: ";
            cin >> a;
            cout << "Podaj wysokosc trojkata: ";
            cin >> b;
            cout << endl;
            wynik = pole_trojkata(a, b);
            break;

        case 2:
            cout << "Podaj dlugosc pierwszej podstawy: ";
            cin >> a;
            cout << "Podaj dlugosc drugiej podstawy: ";
            cin >> b;
            cout << "Podaj wysokosc trapezu: ";
            cin >> c;
            cout << endl;
            wynik = pole_trapezu(a, b, c);
            break;

        case 3:
            cout << "Podaj promien kola: ";
            cin >> a;
            cout << endl;
            wynik = pole_kola(a);
            break;

        case 4:
            exit(0);
            break;

        default:
            cout << "Nie ma takiej opcji do wyboru!";
        }

        cout << "WYNIK = " << wynik << endl
             << endl;
    }
}

float pole_trojkata(float podst, float wysok)
{
    return 0.5 * podst * wysok;
}

float pole_trapezu(float podst_a, float podst_b, float wysok)
{
    return 0.5 * (podst_a + podst_b) * wysok;
}

float pole_kola(float promien)
{
    return 3.14 * (promien * promien);
}