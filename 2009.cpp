#include <iostream>

using namespace std;

int main () 

{

int a, silnia, b;

cout <<"podaj liczbe do silni: ";
cin >>b ;

while ( a <= b) {
    silnia=silnia*a;
a-- ;
a = 1;
silnia = 1;
}
cout << silnia << "\n";

return 0;

}
