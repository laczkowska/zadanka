#include <iostream>

using namespace std;

auto main () -> int

{

int a, b, silnia;

cout << "podaj liczbe do silni: ";
cin >>b;

silnia = 1;

for (a=1; a <= b; a++){
    silnia=silnia*a;
}

cout << silnia << '\n';

return 0;

}
