#include <iostream>

using namespace std;

auto main () -> int

{

int a,b,c;

cout <<"podaj a: ";
cin >>a;

cout <<"podaj b: ";
cin >>b;

if(a>b){
  cout << " a > b " << "\n";
}

if(b>a){
  cout << " a < b " << "\n";
}
if(a==b){
  cout << " a = b " << "\n";
}
}
