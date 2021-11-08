#include <iostream>

using namespace std;

auto main () -> int

{

int a, b, silnia;

cout << "podaj liczbe do silni: ";
cin >>b;

silnia = 1;
a = 1;

do{

                silnia=silnia*a;
                if((a%b)==0){
                    cout << silnia << '\n';


                }
                a++;

       }while ( a<= b);

return 0;

}
