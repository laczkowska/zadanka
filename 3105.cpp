#include <iostream>

using namespace std;

int main ()

{

    int maks=100;
    int n, min, max;
    int tab[max];

        cout << "podaj wielkosc tablicy: ";
        cin >> n;

    do
    {
    
        if (n<=0 || n>maks)
            cout << "zle liczba mniejsza od 0 lub wieksza od 100, po za zakresem " <<'\n';
           
        else 
            cout << "tablica zatwierdzona" << '\n';
            
    }

    while (n==0 || n>maks);

    for (int i=1; i<=n; i++)
    {
        cout << "podaj " << i << " element" << '\n';
        cin >> tab[i];
        cout << '\n';
    }

    for (int i=1; i<n; i++)
    {
        if (tab[i]>max) max=tab[i];
    }

    for (int j=1; j<n; j++)
    {
        if (tab[j]<min) min=tab[j];
    }

    cout << "minimalna wartosc " << min << '\n';
    cout << "maksymalna wartosc " << max << '\n';

return 0;
}






