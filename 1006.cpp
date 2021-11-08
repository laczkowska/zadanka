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
    std::cout << " " << a <<  " > " << b << " " << "\n";
}

if (a<b){
    std::cout << " " << a <<  " < " << b << " " << "\n";
}

if (a==b){
    std::cout << " " << a <<  " == " << b << " " << "\n";
}
}
