#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

void funkcja( void* ta )
{
    auto proxy = reinterpret_cast < char* > ( ta);

        cout << "przed: " << '\n';

        cout << proxy;

        cout << " " << '\n';

        cout << " " << '\n';
}

auto fpsort( void* tab, size_t l, void( *fp )( void* ta )) -> void
{
    (fp)(tab);

    auto proxy = reinterpret_cast < char* > ( tab );

        sort( proxy , proxy+l );

        cout << "po ulozeniu wedlug alfabetu: " << '\n';

        cout << proxy;

        cout << '\n';


}

int main()
{
    char tab[] = "rosolek to najlepsza zupa ever";

    fpsort( tab, strlen ( tab ), funkcja );

    return 0;

}
