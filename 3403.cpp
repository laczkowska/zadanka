#include <iostream>

using namespace std;

void swap (int *w1, int *w2);

int main()
{
    int *w1, *w2, x, y;

    x=1;
    y=2;

    w1 = &x;
    w2 = &y;

        cout << "wartosc x & y =  " << *w1 << " & " << *w2 << '\n';

        swap (w1, w2);

        cout << "wartosc x & y po zamianie =  " << *w1 << " & " << *w2 << '\n';

return 0;
}

void swap(int *w1, int*w2)
{
    int war1 = *w1;

    int war2 = *w2;

    *w1 = war2;

    *w2 = war1;

}
