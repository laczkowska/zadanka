#include <iostream>

using namespace std;

int main ()

{

    int max=100;
    int n, i, suma;
    int tab[max];
    suma=0;

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

    srand(time(NULL));

    for (i=0; i<n; i++) 
        tab[i]=rand()%n+1;
        cout << "elementy tablicy: " << '\n';

    for (i=0; i<n; i++){
        suma=suma+tab[i];
        cout << tab[i] << " ";
    }

    cout << "suma liczb wynosi:  " << suma << '\n';



return 0;

}
