#include <iostream>

using namespace std;

auto main() -> int
{
	int A[100];
    int a, ma, mi;

    cout << "podaj wielkosc tablicy: " << '\n';
    cin >> a;

    while(a > 100)
        {
            cout << "zle, wartosc nie moze byc wieksza od 100 " << '\n'; 
            cin >> a;
        }


    ma= A[0];
    mi= A[0];

    for(int i = 0; i < a ; i++)
    {
        if (A[i] > ma) ma = i;      
    }
    for(int j = 0; j < a ; j++)
    {
        if(A[j] < mi) mi = j;        
    }

        cout << "max: " << ma << " " << "wartosc: " << A[ma] << '\n';
        cout << "min: " << mi << " " << "wartosc: " << A[mi] << '\n';

    return 0;
}
