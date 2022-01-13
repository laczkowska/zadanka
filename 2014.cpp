#include <iostream>

using namespace std;

auto main () -> int

{

    int a;
    cout << "podaj długość boku kwadratu: " << '\n';
    cin >> a;

    for(int i = 0; i < a; i++)        
    {
        cout << "*";
    }
        cout << '\n';

    for(int j = 0; j < a - 2; j++) 
    {
        cout<<"*";
            for(int j = 0; j < a - 2; j++)  
            {
                cout << " ";
            }
        cout << "*\n";
    }
    for(int k = 0; k < a; k++) 
        cout << "*";
    

return 0;
}
