#include <iostream>

using namespace std;

int main ()

{ 
    const int max=100;
    float tab[max];
    int n, a;

        cout << "podaj jak dluga ma byc tablica: ";
        cin >> n;
    do
    {
        
        if (n<=0 || n>max)
            cout << "zle liczba mniejsza od 0 lub wieksza od 100, po za zakresem" << '\n';;
    }
    while (n==0 || n>max);

    for (int i=0; i<n; i++)
    {
        cout << "podaj liczbę start: " << '\n';
        cin >> i;
        cout << '\n';

        for (int a=i; a<=n; a++)
        {
            cout << a << '\n';
            
        }
    }

return 0;

}

