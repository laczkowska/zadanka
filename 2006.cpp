#include <iostream>

using namespace std;

auto main () -> int

{

int a,b,c,d;

cout <<"podaj a: ";
cin >>a;

cout <<"podaj b: ";
cin >>b;

cout <<"podaj c: ";
cin >>c;

cout <<"podaj d: ";
cin >>d;

if(a>b){
  cout << " a > b " << "\n";
}

if(b>a){
  cout << " a < b " << "\n";
}

if(a==b){
  cout << " a = c " << "\n";
}

if(a>c){
  cout << " a > b " << "\n";
}

if(c>a){
  cout << " a < c " << "\n";
}

if(a==c){
  cout << " a = c " << "\n";
}

if(a>d){
  cout << " a > d " << "\n";
}

if(d>a){
  cout << " a < d " << "\n";
}
if(a==d){
  cout << " a = d " << "\n";
}

if(b>c){
  cout << " b > c " << "\n";
}

if(c>b){
  cout << " b < c " << "\n";
}
if(c==b){
  cout << " b = c " << "\n";
}

if(b>d){
  cout << " b > d " << "\n";
}

if(d>b){
  cout << " b < d " << "\n";
}
if(d==b){
  cout << " b = d " << "\n";
}

if(c>d){
  cout << " c > d " << "\n";
}

if(d>c){
  cout << " c < d " << "\n";
}

if(d==c){
  cout << " c = d " << "\n";
}
}
