#include <iostream>

using namespace std;

auto main () -> int

{

int dzielnik, limit;
int a;
int b;
int test=0;
int suma=0;


dzielnik=a;
limit=b;

cout <<"podaj dzielnik: ";
cin >>a;

cout <<"podaj limit: ";
cin >>b;

            for(int j=0;j<=a;j++){
	        for(int i=0; i*i<=j; i++){
		        if(j%a==0){
                    test=test+1;
                }
			 }
             if(test==0){
                suma=suma+j;
                
             }
             test=0;
            
        }
	   cout<<suma;

}
