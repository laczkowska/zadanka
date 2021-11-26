#include <iostream>

using namespace std;

void sortowanie_babelkowe(int tab[], int a)

{

    for(int i=0; i<a; i++)
        for(int j=1; j<a-i; j++)
        if(tab[j-1]>tab[j])
            swap(tab[j-1], tab[j]);

}

int main()

{

    int *tab, a;

        cout << "podaj ilosc liczb w tablicy: " << '\n';
        cin >> a;

        tab = new int [a];

        for (int i=0; i<a; i++)
            cin >> tab[i];

        sortowanie_babelkowe(tab,a);

        for(int i=0; i<a; i++)
            cout << tab[i] << " ";

return 0;

}
