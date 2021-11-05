#include <iostream>

using namespace std;

auto main() -> int

{

int a, b;
int test=0;
int suma=0;



cout <<"podaj dzielnik: ";
cin >>a;

cout <<"podaj limit: ";
cin >>b;
    
    for(int i=1; i<=b; i++)
    {
  
        if(i%a==0){
            suma=suma+i;
            
            
        }
    }
       cout << suma << "\n";
    return 0;
}
