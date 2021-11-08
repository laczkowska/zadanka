#include <iostream>

using namespace std;

auto main () -> int

{

int a, b, silnia;

cout << "podaj liczbe do silni: ";
cin >>b;

silnia = 1;
a = 1;

while ( a<= b ){
    silnia=silnia*a;
a++;

}
cout << silnia << '\n';

return 0;

}
