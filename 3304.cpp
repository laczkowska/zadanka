#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    auto v = vector<int>();

    int a;

        cout << "podaj ilosc liczb jakimi chcesz wypelnic tablice: " << '\n';
        cin >> a;
        cout << "            " << '\n';
        cout << "liczby znajdujace sie w tablicy: " << '\n';

    float size = a;

    for (int i = 0; i <= a; i++)
    {
        int b = rand() % a + 1;
        v.push_back(b);
    }

    for (int i = 0; i < a; i++)
    {
            cout << v.at(i) << '\n';
    }


    float srednia = 0.0;
 
    for (int i = 0; i < size; i++)

    {
        srednia = srednia + v.at(i);
    }

        srednia = srednia/size;

        cout << "srednia arytmetyczna podanych liczbw ynosi " << srednia << '\n';

return 0;

}
