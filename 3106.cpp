#include <iostream>

using namespace std;

auto main() -> int
{ 
	    int a, w, i, s;

	    s = 0;
	    i=0;
	   
	    int tablica[100];
	   
        cout << "podaj wielkosc tablicy: " << '\n';
        cin >> a;
    
    while(a > 100)
        {
            cout << "zle, liczba nie moze byc wieksza od 100" << '\n'; 
            cin >> a;
        }
    
        cout << "podaj liczbe poszukiwana w tablicy: " << '\n';
        cin >> w;
    
  
        
       for(int i = 0; i < a; i++)
        {

            tablica[i] = s;         
            s++;
        }
	
	while (tablica[i] != w)	
	{
		i++;
		if(i >= a){break;} 			
	}
	
	if (i==a)					
	{
	    cout << "-1" << '\n';
	}
	else
	{
	    cout << "tablica zawiera podana wartosc w tablicy w indeksie: " << i << '\n';		
	}
	return 0;
}
