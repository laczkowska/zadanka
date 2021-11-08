#include <iostream>

using namespace std;

bool czy_pierwsza(int a)
{
        if (a < 2)
            return false;

        for (int i=2; i*i<=a; i++)
            if (a%i==0)
                return false;

        return true;
}

int main ()
{

    int a;

    cout << "podaj a: ";
    cin >>a;

    if (czy_pierwsza(a))
        cout << "liczba " << a << " jest pierwsza" << '\n';
    else
        cout << "liczba " << a << " nie jest pierwsza" << '\n';


return 0;

}




