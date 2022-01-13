#include <iostream>

using namespace std;

auto main() -> int
{
    int a;
    cout << "podaj liczbe: " << '\n';
    cin >> a;

	if(a%2==0 && a != 2 && a != 3 && a != 5 && a != 7 && a != 11 || a%3==0 && a != 2 && a != 3 && a != 5 && a != 7 && a != 11 || a%5==0 && a != 2 && a != 3 && a != 5 && a != 7 && a != 11 || a%7==0 && a != 2 && a != 3 && a != 5 && a != 7 && a != 11 ||  a%11==0 && a != 2 && a != 3 && a !=5 && a != 7 && a != 11 )
	{
		cout << "nie jest to liczba pierwsza :(" << '\n';
	}

	else
	{
		cout << "jest to liczba pierwsza :)" << '\n';
	}

return 0;
}

