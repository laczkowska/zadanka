#include <iostream>

using namespace std;

auto main () -> int


{

int a, b;

cout << "podaj bok a: ";
cin >>a;



    for (int i=0; i<=a*1; i++)
    {
        for (int j=0; j<=a; j++)
        {
            if (i<=j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << '\n';
    }


return 0;

} 
