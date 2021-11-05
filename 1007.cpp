#include <iostream>

using namespace std;

auto main () -> int

{

int a;

cout <<"podaj a: ";
cin >>a;

if(a>0){
  cout << "1" << "\n";
}

if(0>a){
  cout << "-1" << "\n";
}
if(a==0){
  cout << "0" << "\n";
}
}
