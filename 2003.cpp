#include <iostream>

using namespace std;

auto main () -> int

{

int a, b, s;

cout << "podaj a: ";
cin >>a;

cout << "podaj b: ";
cin >>b;

cout << "podaj s: ";
cin >>s;

if (s==0){
    std::cout <<  "zle s rowne 0"  << "\n";
}
else{
        do{
                cout << a << '\n';
                a++;

       }while(a<b);
}

}
