#include <iostream>

using namespace std;

auto main () -> int

{

float a, b, c;

cout << "podaj a: ";
cin >>a;

cout << "podaj b: ";
cin >>b;

cout << "podaj c: ";
cin >>c;

if (a>b && a>c){
    cout << a << "\n";
}

if (a<b && c<b){
    cout << b << "\n";
}

if (a<c && b<c){
    cout << c << "\n";
}

if (a==b && a==c && b==c){
    cout << "sa rowne" << "\n";
}
}
