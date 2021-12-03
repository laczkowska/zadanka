#include <cmath>
#include <iostream>

using namespace std;

float stozek (float h, float r, float R)

{
    float V;
    V = ((M_PI / 3) * h)* ((R * R) + (R * r) + (r * r));
    return V;
}

int main()
{
    while(true)
    {
        float h, R, r;

                cout << "podaj wysokosc: " << '\n';
                cin >> h;

                cout << "podaj promien gornej podstawy: " << '\n';
                cin >> r;

                cout << "podaj promien dolnej podstawy: " << '\n';
                cin >> R;

                cout << "objetosc stozka scietego wynosi: " << stozek (h, r, R) << '\n' ;

        int n;
        cout << "wpisz 0, aby wylaczyc program kalkulujacy objetosc stozka: " << '\n';
        cin >> n;

        if(n==0)
        {
        break;
        }

    }
return 0;
}
