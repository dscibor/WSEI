#include <ctime>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()

{

string tab[] = {" ", "jeden", "dwa", "trzy", "cztery", "pięć", "sześć"};
srand( time( NULL ) );
int liczba1; 
int liczba2;
string z;

cout << "\n Naciśnij 'x' aby rzucić kostkami!" << endl;

cin >> z;

if (z == "x" || z == "X")
    do  {   

        liczba1 = (rand() % 6 ) + 1; 
        liczba2 = (rand() % 6 ) + 1;
        cout << "\n Pierwsza kostka: " << tab[liczba1] << endl; 
        cout << "\n Druga kostka: " << tab[liczba2] << endl;
        cout << "\n Wynierz 'x' aby rzucić kotskami lub dowolny inny przycisk aby zakończyć gre!" << endl;
        cin >> z;

    } while (z == "x" || z == "X");

cout << "\n Koniec gry!" << endl;

return 0;
}