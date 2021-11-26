#include <iostream>

using namespace std;


int max2( int a, int b);
int max3( int a, int b, int c);

int main()

{
    int x, y, z;

        cout << "podaj pierwsza liczbe: "<< '\n';
        cin >> x;

        cout << "podaj druga liczbe: " << '\n';
        cin >> y;

        cout << "podaj trzecia liczbe: "<<'\n';
        cin >> z;
 
        cout << "najwieksza liczba to: " << max3(x, y, z) << '\n';

    return 0;
}


int max2 ( int a, int b)

{
    if(a > b)

    {
        return a;
    }

    else

    {
        return b;
    }
}


int max3 ( int a, int b, int c)

{
    if ( max2 (a, b) > c)

    {
        return max2(a, b);
    }

    else

    {
        return c;
    }
}

