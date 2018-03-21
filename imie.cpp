#include <iostream>

using namespace std;
int l_calk;
string imie;

int main()
{
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj liczbe calkowita: ";
    cin >> l_calk;
    for(int i=1; i<=l_calk; i++)
    {
        cout << i <<". " << imie << endl;

    }
    return 0;
}
