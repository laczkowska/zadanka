#include <iostream>

using namespace std;

bool czy_pierwsza(int a)
{
{
        if (a < 2)
            return false;

        for (int i=2; i*i<=a; i++)
            if (a%i==0)
                return false;

        return true;
}
}

int main ()

{
        int a;
    int test=0;
    int suma=0;

        cout << "podaj a: ";
        cin >>a;
{
        if (czy_pierwsza(a))
            cout << "liczba " << a << " jest pierwsza" << '\n';


        for(int j=2; j<=a; j++){
             for(int i=2; i*i<=j; i++){
                    if(j%i==0){
                test=test+1;
             }
                    }
            if(test == 0){
               suma+suma+j;

            }
            test=0;

        
            cout << suma;


    
    
            else
            {
                cout << "liczba " << a << " nie jest pierwsza" << '\n';

            }
}
}
}
