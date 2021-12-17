#include <iostream>

using namespace std;

void cone (float &r, float &h)                    
{
    r = ( 3.14159 * (r*r) );                         
    h = ( (r/3) * h);                             
}

int main()
{
    float h, r;

        cout << "podaj promien stozka: " << '\n';
        cin >> r;

        cout << "podaj wysokosc stozka: " << '\n';
        cin >> h;

        cone (h, r);

        cout << "pole podstawy = " << r << '\n';
        cout << "objetosc stozka = " << h << '\n';

    return 0;

}
