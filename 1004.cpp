#include <iostream>

using namespace std;

auto main () -> int

{

float a, b;

cout << "podaj a: ";
cin >>a;

cout << "podaj b: ";
cin >>b;

if (a>b){
    cout << a << "\n";
}

if (a<b){
    cout << b << "\n";
}

if (a==b){
    cout << "sa rowne" << "\n";
}
}
