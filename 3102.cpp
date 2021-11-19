#include <iostream>

using namespace std;

int main ()

{

    const int max=100;
    float tab[max];
    int n;

        cout << "podaj wielkosc tablicy: ";
        cin >> n;

    do
    {
    
        if (n<=0 || n>max)
            cout << "zle liczba mniejsza od 0 lub wieksza od 100, po za zakresem " <<'\n';
           
        else 
            cout << "tablica zatwierdzona" << '\n';
            
    }
    while (n==0 || n>max);

    for (int i=1; i++;)
    {
        cout << "podaj " << i << " element" << '\n';
        cin >> tab[i];
        cout << '\n';

        for (int a=i; a<=n; a++)
        {
        cout << a << '\n';
        }
    }

return 0;

}

