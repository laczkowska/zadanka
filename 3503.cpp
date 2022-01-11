#include <iostream>
#include <algorithm>
#include <string.h> 

using namespace std;

void memrev ( void* ta, size_t l )
{
    auto proxy = reinterpret_cast <char*>  (ta );

    char r[l];

    for(int i = 0; i < l; i++)
    {
    r[ i ] = proxy [ l - 1 - i ];
    }

    for ( int i = 0; i < l; i++ )
    {
    proxy[ i ] = r[ i ];
    }
    cout << proxy << '\n';
}


int main()
{
    char tab[] = "igoreip i kelosor eibul" ;

    memrev( tab, strlen( tab ));

    return 0;

}
