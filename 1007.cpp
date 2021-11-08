#include <iostream>

using namespace std;

auto main () -> int

{

float a;

cout << "podaj a: ";
cin >>a;


if (a>0){
    std::cout << "1"  << "\n";
}

if (a<0){
    std::cout <<  "-1"  << "\n";
}

if (a==0){
    std::cout <<  "0"  << "\n";
}
}
