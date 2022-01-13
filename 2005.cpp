#include <iostream>

using namespace std;

auto main() -> int
{
    int a, suma=0;

    cout << "podaj liczbę: " << '\n';
    cin >> a;

	if(a%2==0 && a != 2 && a != 3 && a != 5 && a != 7 && a != 11 || a%3==0 && a != 2 && a != 3 && a != 5 && a != 7 && a != 11 || a%5==0 && a != 2 && a != 3 && a != 5 && a != 7 && a != 11 || a%7==0 && a != 2 && a != 3 && a != 5 && a != 7 && a != 11 ||  a%11==0 && a != 2 && a != 3 && a !=5 && a != 7 && a != 11 )
	{
	    cout << "nie jest to liczba pierwsza :(" << '\n';
		return 0;
	}

	else
	{
		cout << "jest to liczba pierwsza :)" << '\n';
	}
	
    for(int i=2;i<=a;i++)
    {
	    if(i%2==0 || i%3==0 || i%5==0 || i%7==0 || i%11==0)
	    {
		    if(i==2 || i==3 || i==5 || i==7 || i==11)
		    {
			    suma = suma + i;
			
			    }
	cout << " " << '\n';
	}

	else
	{
		suma = suma + i;
		
	}
} 

    cout << suma << '\n';

return 0;
}


