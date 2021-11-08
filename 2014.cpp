#include <iostream>

using namespace std;

auto main () -> int

{

int a, b;

cout << "podaj dlugosc boku kwadratu a: ";
cin >>a;


if (a<3)
    cout <<  "zle a mniejsze od 3"  << "\n";
else
{
    for (int j=0; j<a - 2; j++)
    {
        cout << "*";
        for (int i=1; i<=a - 2; ++i)
        {
            cout << " ";
        }
        cout << "*" << '\n';
    }

    for (int n = 1; n<=a; n++)
    {
        cout << "*";
    } 
}


return 0;

}
