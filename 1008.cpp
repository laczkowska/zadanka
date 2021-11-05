#include <iostream>

using namespace std;

auto main () -> int

{

int a, b, c, d;

cout <<"podaj a: ";
cin >>a;

cout <<"podaj b: ";
cin >>b;

cout <<"podaj c: ";
cin >>c;

if(a>b && a>c){
  cout << a << "\n";
}

if(b>a && b>c){
  cout << b << "\n";
}

if(c>a && c>a){
  cout << c << "\n";
}

if(a==b && a==c && b==c){
  cout << "są rowne" << "\n";

}
}
