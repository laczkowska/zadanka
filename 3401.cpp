#include <iostream>
#include <string>

using namespace std;

int main()
{
    string z = " Natalia Laczkowska ";

    cout << '\n';

    string * w;
    w = &z;

        cout << " wartosc zmiennej =  " << *w << '\n';

        cout << " adres zmiennej =  " << & *w << '\n';

        cout << " rozmiar zmiennej =  " << sizeof(*w) << '\n';


        cout << " wartosc wskaznika =  " << w << '\n';

        cout << " adres wskaznika =  " << & w << '\n';

        cout << " rozmiar wskaznika =  " << sizeof(w) << '\n';


return 0;
}
