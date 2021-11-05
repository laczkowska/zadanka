#include <iostream>

using namespace std;

int main () 

{

int a, silnia, b;

cout <<"podaj liczbe do silni: ";
cin >>b ;

a = 1;
silnia = 1;

while ( a <= b) {
    silnia=silnia*a;
a++ ;

}
cout << silnia << "\n";

return 0;

}
