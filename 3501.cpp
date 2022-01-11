#include <iostream>
#include <ctime>
#include <random>

using namespace std;

void funkcja ( int const );
void call_with_random_int ( void( *fp )( int const )) ;

int main()
{

   auto fp = &funkcja;                 

   call_with_random_int ( funkcja );

}


void call_with_random_int ( void( *fp )( int const ))         
{
    srand ((int)time(0));   
                
    int losowaliczba;

    losowaliczba = (rand()%100)+1;


    (fp)(losowaliczba);
}


void funkcja(int const a)
{

        cout << "argument funkcji: " << a << '\n';

}
