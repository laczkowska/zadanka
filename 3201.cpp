#include <iostream>
#include <array>

using namespace std;

int main ()
{

;

        array <char, 94> tab;

    for (int i>=33; i<=126; i++)
    {

       tab.at ((i-33)) = char(i);

            cout << tab.at(i-33) << '\n';

    }


    return 0;
}
