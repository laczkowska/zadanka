#include <iostream>

using namespace std;

auto main () -> int

{

int a;

cout << "podaj dlugosc boku a: ";
cin >>a;

if (a<3)
    cout << "zle a mniejsze od 3 " << '\n';

else
{
    for (int n=1; n<a; n++)
    {
        cout << "*";
    }
    for (int j=0; j<a-1; j++)
    {
        cout << "*";
        for (int i=2; i<=a-1; i++)
        {
            cout << " ";
        }
        cout << "*" << '\n';
    }

    for (int n=1; n<=a; n++)
    {
        cout << "*";
        }
        cout << '\n';
    }

return 0;

}









