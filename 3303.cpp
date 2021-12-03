#include <iostream>
#include <cmath>


using namespace std;


float trojkat(float a, float h);

float prostokat(float a, float b);

float kolo(float r);

float trapez(float a, float b, float h);

float szesciokat(float a);


int main()

{

while(true)

{
    float a, b, h, r;
    int n;

        cout << "wybierz figure z podanych: \n";

        cout << "0 - wyjscie,\n 1 - trojkat,\n 2 - prostokat,\n 3 - kolo,\n 4 - trapez,\n 5 - szesciokat foremny\n";
        cin >> n;


    if(n == 1)

    {
            cout << "jesli podane wartosci beda bledne, otrztmany wynik bedzie automatycznie wynosil -1" << '\n';

            cout << "podaj dlugosc podstawy: " << '\n';
            cin >> a;

            cout << "podaj wysokosc: " << '\n';
            cin >> h;

            cout << "pole trojkata wynosi: " << trojkat(a, h) << '\n';

    }


   else if (n == 2)
    {
            cout << "jesli podane wartosci beda bledne, otrztmany wynik bedzie automatycznie wynosil -1" << '\n';

            cout << "podaj bok a: " << '\n';
            cin >> a;

            cout << "Podaj bok b: " << '\n';
            cin >> b;

            cout << "Pole prostokata wynosi: " << prostokat(a, b) << '\n';

    }


    else if(n == 3)

    {
            cout << "jesli podane wartosci beda bledne, otrztmany wynik bedzie automatycznie wynosil -1" << '\n';

            cout << "podaj promien kola: " << '\n';
            cin >> r;

            cout << "pole kola wynosi: " << kolo(r) << '\n';

    }


    else if(n == 4)

    {
            cout << "jesli podane wartosci beda bledne, otrztmany wynik bedzie automatycznie wynosil -1" << '\n';

            cout << "podaj gorna podstawe: " << '\n';
            cin >> a;

            cout << "podaj dolna podstawe: " << '\n';
            cin >> b;

            cout << "podaj wysokosc: " << '\n';
            cin >> h;

            cout << "pole trapezu wynosi: " << trapez(a,b,h) << '\n';

    }


    else if(n == 5)

    {
            cout << "jesli podane wartosci beda bledne, otrztmany wynik bedzie automatycznie wynosil -1" << '\n';

            cout << "podaj bok szesciokata foremnego: " << '\n';
            cin >> a;

            cout << "pole szesciokata foremnego wynosi: " << szesciokat(a) << '\n';
    }


   if(n==0)

   {
       break;
   }

}

return 0;

}


float trojkat(float a, float h)
{
    if(a <=0 || h <=0)
    {
        return -1;
    }
    else
    {
        return ((a*h)/2);
    }
}


float prostokat(float a, float b)
{
    if(a<=0 || b<=0)
    {
        return -1;
    }
    else
    {
        return a*b;
    }
}


float kolo(float r)
{
    if(r<=0)
    {
        return -1;
    }
    else
    {
        return 3.14*(r*r);
    }
}


float trapez(float a, float b, float h)
{
    if(a<=0 || b<=0 || h<=0)
    {
        return -1;
    }
    else
    {
        return (((a+b)*h)/2);
    }
}

float szesciokat(float a)
{
    if(a<=0)
    {
        return -1;
    }
    else
    {
        float b = sqrt(3);
    return (((a*a)*b)/4);
    }
}
