#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    auto v = vector<int>();
    int a;
        cout << "podaj ilosc liczb w tablicy: " << '\n';
        cin >> a;


    for (int i = 0; i < a; i++)
    {
        int b = rand() % a + 1; 
        v.push_back(b);
        
    }

        cout << "po sortowaniu" << '\n';
        sort(v.begin(), v.end(), greater<int>()); 

   for (int i = 0; i < a; i++)
   {
        cout << v.at(i) << '\n'; 
   }

return 0;
}
