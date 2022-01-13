#include <iostream>

using namespace std;

auto main() -> int
{
	int A[100];
    int a, s, i;
    
    cout << "podaj wielkosc tablicy: " << '\n';
    cin >> a;

        if(a > 100)
        {
            cout << "zle, liczba nie moze byc wieksza od 100 " << '\n'; 
            cin >> a;
        }

        else
        {
            cout << "wprowadz jedna wartosc tablicy: " << '\n';
            cin >> s;


            A[i]=s;         
            s++;
        }
    return 0;
}
