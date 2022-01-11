#include <iostream>

using namespace std;


double fSum ( double ( *f )( double ), int n, int m ); 

double funkcja ( double a );


int main()
{

    auto f = &funkcja;             

    cout << fSum ( funkcja, 7, 85) << '\n';  

    return 0;
}


double funkcja ( double a )
{
    return a*2;                         
}


double fSum ( double ( *f )( double ), int n, int m)
{

    float suma = 0.0;

    for(int i = n; i <= m; i ++)                     
    {
        suma += f(i);
    }

    return suma;
}
