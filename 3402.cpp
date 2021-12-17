#include <iostream>
#include <string>

using namespace std;

void print(string *w)
{
    cout << & *w << " = " << *w << '\n';

}
int main()
{
    string z = " Hello, World!";
    string * wsk;
    wsk = &z;

    print(wsk);


return 0;
}
