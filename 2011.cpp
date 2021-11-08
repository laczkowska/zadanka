#include <iostream>

using namespace std;

auto main () -> int

{

int a, b;

cout << "podaj dlugosc boku a: ";
cin >>a;

cout << "podaj dlugosc boku b: ";
cin >>b;

{

    for (int j=0; j<a; j++)
    {

        for (int i=0; i<b; i++)
        {
    
            cout << "*";
        }

        cout << '\n';
    }
}

return 0;

}
