#include <iostream>

using namespace std;



int XY(int a,int b);


int main()
{
    int a1, b1;

        cout << "podaj a: " << '\n';
        cin >> a1;

        cout << "podaj b: " << '\n';
        cin >> b1;

        cout << XY(a1,b1) << '\n';


}

int XY(int a1, int b1)

{
   return (a1*2) + (b1+100);

}
