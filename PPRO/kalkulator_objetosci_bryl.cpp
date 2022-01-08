#include <iostream>
#include <stdlib.h>

using namespace std;

void szescian()
{

    int a;

    cout << "Podaj długość boku sześcianu: ";
    cin >> a;
    cout << "Objętość sześcianu wynosi: "
         << (a * a * a)
         << endl
         << "Pole sześcianu to: "
         << (6 * a * a)
         << endl;
}

void prostopadloscian()
{

    int a, b, c;

    cout << "Podaj długości trzech różnych krawędzi: ";
    cin >> a >> b >> c;
    cout << "Objętość prostopadłościanu wynosi: "
         << (a * b * c)
         << endl
         << "Pole prostopadłościanu to: "
         << ((2 * a * b) + (2 * a * c) + (2 * b * c))
         << endl;
}

void walec()
{

    int r, h;
    float pi = 3.14;

    cout << "Podaj promień a następnie wysokość walca: ";
    cin >> r >> h;
    cout << "Objętość sześcianu wynosi: "
         << (pi * r * r * h)
         << endl
         << "Pole walca to: "
         << ((2 * pi * r * r) + (2 * pi * r * h))
         << endl;
}

int main()
{

    int wybor = 0;

    cout << "Program oblicza objętości brył. Wybierz interesującą Cię opcje: \n";
    while (true)
    {
        cout << "[1] - Objętość sześcianu \n"
             << "[2] - Objętość prostopadłościanu \n"
             << "[3] - Objętość walca \n"
             << "[4] - Wyjdź \n"
             << endl;
        cin >> wybor;

        if (wybor == 4)
            break;
        else if (wybor == 1)
            szescian();
        else if (wybor == 2)
            prostopadloscian();
        else if (wybor == 3)
            walec();

        cout << endl;
    }
}