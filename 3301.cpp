#include <iostream>

using namespace std;


void szachownica (int n);

int main()
{
       
        szachownica (4);
        

return 0;
}



void szachownica (int n)

{
    for (int i=1; i<=n; i++)
    {
        if( i%2!=0)
        {
            cout << "| ***   ***   ***    |" << '\n';
            cout << "| ***   ***   ***    |" << '\n';
        }
        else
        {
            cout << "|    ***   ***   *** |" << "\n";
            cout << "|    ***   ***   *** |" << "\n";
        }
    }
}

