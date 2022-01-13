#include <iostream>
#include <time.h> 

using namespace std;

auto main() -> int
{
      int a;

      cout << "podaj max wartosc tablicy: " << '\n';
      cin >> a;


        int A[50];

        for(int i = 0; i < 50; i++)
        {

            A[i] = rand()%(a+1);   

            cout << A[i] << '\n';

        }
    return 0;
}
