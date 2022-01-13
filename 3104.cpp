#include <iostream>

using namespace std;

auto main() -> int
{
    int A[100];
    int a, suma, start;

    suma = 0;
    start = 0;

    cout << "podaj wielkosc tablicy: " << '\n';
    cin >> a;
	
	while(a > 100)
        {
            cout << "zle, liczba nie moze byc wieksza od 100 " << '\n'; 
            cin >> a;
        }
        
        for(int i = 0; i < a; i++)
        {

            A[i]=start;         
            start++;
        }


    for(int i = 0; i < a ; i++)
    {
        suma += A[i]; 
    }

        cout << "suma wynosi: " << suma << '\n';

    return 0;
}

