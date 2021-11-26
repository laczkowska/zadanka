#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, r, j;
    auto v = vector <int> ();

    do
    {
        cout << "podaj element do tablicy: " << '\n';
        cin >> n;
        v.push_back(n);

    }while (n!=0);

        r = (v.size()-1);
    
        j = 0;
    
    do
    {
            cout << v.at(j) <<" ";
        j++;

        if ((j%5==0))
        {
            cout <<" \n";
        }

    }while (r > j);

return 0;
}
