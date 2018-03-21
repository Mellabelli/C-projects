#include <iostream>

using namespace std;
int populacja;
int godzin;
int main()
{
    populacja = 1;
    godzin = 0;
    while (populacja <= 100000)
    {
        godzin++;
        populacja= populacja*2;
        cout << "Minelo godzin: " << godzin <<endl;
        cout << "Liczba bakteri wynosi: " << populacja << endl;
    }
    return 0;
}
