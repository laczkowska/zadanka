#include <iostream>
#include <time.h> 

using namespace std;

int n=50;
int a;

int main()
{
    int tab[n];
        cout << "podaj liczbe a: ";
        cin >> a;

    srand(time(NULL));

    for(size_t i=0; i<n; i++)
    {
        tab[i] = rand()%a+1;

        cout << tab[i] << ' ';
    }
    cout << '\n';
}
