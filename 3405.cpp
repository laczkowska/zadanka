#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int copyTableToVector (int tab[100][8], int indeks);

int main()
{
    int tablica[100][8];
    int indeks;

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j <8; j++)
        {
            tablica[i][j] = rand() % 9+1; 
                       
            cout << tablica[i][j] <<" ";                    
        }
            cout << '\n';

    }

        cout << "podaj swoj indeks: " << '\n';
        cin >> indeks;

        cout << copyTableToVector(tablica, indeks);



    return 0;
}


int copyTableToVector (int tab[100][8], int indeks)
{
    int r;
    vector <int> w;


    r = indeks % 3;

                        if(r == 0)
                        {
                        r = 5;
                        }

    for(int j = 0; j < 8;j++)
    {
        int a = tab [r-1][j];                            
        w.push_back(a);
    }

int *wsk;
wsk = &w.back();
r = *wsk;                                           
return r;

}
