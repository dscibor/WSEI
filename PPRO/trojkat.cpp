#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    float a, b, c;

    cout << ("Podaj długości trzech odcinków z których chcesz zbudować trójkąt: \n");
    cin >> a;
    cin >> b; 
    cin >> c;

    if ((a >= (b + c))  || (b >= (a + c)) || (c >= (a + b)))
        cout << ("Nie uda się stworzyć trójkąta! \n");
    else
        cout << ("Taki trójkąt istnieje! \n");
    
}