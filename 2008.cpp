#include <iostream>

using namespace std;

int main () 

{

int a, silnia, b;

cout <<"podaj liczbe do silni: ";
cin >>b ;

silnia = 1;

for (a=1; a<=b; a++){
    silnia=silnia*a;
}
cout << silnia << "\n";

return 0;

}
