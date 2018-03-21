#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;
float x;
float y;
int wybor;

int main()
{
    for(;;)
    {

    cout << "Podaj pierwsza liczbe" << endl;
    cin >> x;
    cout << "Podaj druga liczbe" << endl;
    cin >> y;

    cout << " \n Kalkulator menu: \n _______ \n \n 1. Dodawanie \n 2. Odejmowanie \n 3. Mnozenie \n 4. Dzielenie \n 5. Wyjscie"  <<endl;
    cout << "Twoj wybor: ";
    cin >> wybor;
    switch(wybor)
    {
    case 1:
            cout << "Suma: " <<  x+y << endl;
        break;
    case 2:
        cout << "Roznica: " << x-y <<endl;
        break;
    case 3:
       cout << "Iloczyn: " << x*y <<endl;
        break;
    case 4:
        if (y==0) cout << "Nie dzielimy przez 0!" <<endl;
        cout << "Iloraz: " <<x/y <<endl;
        break;
    case 5:
        exit(0);
        break;

    default: cout << "Takiej opcji nie ma w menu!";
    }
    getchar(); getchar();
    system("cls");
    }
    return 0;
}
