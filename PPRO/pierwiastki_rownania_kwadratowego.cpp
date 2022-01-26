#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <math.h>
#include <ctime>

using namespace std;

void calculation(float a, float b, float c);
int change();

int main()
{
    for (;;)
    {
        int choice;
        cout << "PROGRAM LICZĄCY PIERWIASTKI RÓWNANIA KWADRATOWEGO ORAZ WSPÓŁRZĘDNE WIERZCHOŁKA PARABOLI. \n"
             << "[1] - Podaj wspolczynniki trojmianu kwadratowego \n"
             << "[2] - Losuj wspolczynniki trojmianu kwadratowego \n"
             << "[0] - Zakoncz program \n"
             << "Twoj wybor: ";
        cin >> choice;

        float result, a, b, c;

        switch (choice)
        {
        case 1:
            a = 0;
            while (a == 0)
            {
                cout << "Podaj a: ";
                cin >> a;
                if (a == 0)
                {
                    cout << "'a' nie moze rownac sie 0 \n";
                }
            }
            cout << "Podaj b: ";
            cin >> b;
            cout << "Podaj c: ";
            cin >> c;
            cout << endl;
            calculation(a, b, c);
            break;

        case 2:
            srand(time(NULL));
            int random_numbers[3];
            int c;

            for (int i = 0; i < 3; i++)
            {
                c = (rand() % 2) + 1;
                random_numbers[i] = (rand() % 10) + 1;
                if (change() == 1)
                {
                    random_numbers[i] = -random_numbers[i];
                }
            }
            a = random_numbers[0];
            b = random_numbers[1];
            c = random_numbers[2];
            cout << "a: " << a << "\n"
                 << "b: " << b << "\n"
                 << "c: " << c << "\n";
            calculation(a, b, c);

            break;

        case 0:
            exit(0);
            break;

        default:
            cout << "Nie ma takiej opcji do wyboru! \n"
                 << endl;
        }
    }
}

void calculation(float a, float b, float c)
{
    if (a == 0)
    {
        cout << "'a' nie moze rownac sie 0 \n";
        return;
    }
    float delta;
    delta = (b * b) - (4 * a * c);
    cout << "DELTA: " << delta << "\n";

    if (b > 0)
    {
        b = -b;
    }

    if (delta == 0)
    {
        float x;
        x = (b / (2 * a));
        cout << "X: " << x << "\n";
    }
    else if (delta > 0)
    {
        float x1, x2;
        x1 = ((b - sqrt(delta)) / (2 * a));
        x2 = ((b + sqrt(delta)) / (2 * a));
        cout << "Dwa pierwsiastki rzeczywiste: x1 = " << x1 << " oraz "
             << "x2 = " << x2 << "\n";
    }
    else
    {
        cout << "To równanie kwadratowe nie ma rozwiązań. \n";
    }

    if (delta > 0)
    {
        delta = -delta;
    }

    float w1, w2;
    w1 = (b / (2 * a));
    w2 = (delta / (4 * a));
    cout << "Wspolrzedne wierzcholka: w1 = " << w1 << ", "
         << "w2 = " << w2 << "\n"
         << "\n";
}

int change()
{
    int c = (rand() % 2) + 1;
    if (c == 1)
    {
        return 1;
    }
    else
        return 0;
}
