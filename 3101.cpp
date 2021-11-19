#include <iostream>

using namespace std;

int main ()

{

    const int max=100;
    float tab[max];
    int n;

        cout << "podaj wielkosc tablicy: ";
        cin >>n;

    do
    {
    
        if (n<=0 || n>max)
            cout << "zle liczba mniejsza od 0 lub wieksza od 100, po za zakresem " <<'\n';
           
        else 
            cout << "tablica zatwierdzona" << '\n';
            
    }
    while (n==0 || n>max);

    for (int i=0; i<n; i++)
    {
        cout << "podaj " << i << " element" << '\n';
        cin >> tab[i];
        cout << '\n';
    }

return 0;

}
