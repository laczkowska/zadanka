#include <iostream>
#include <string>

using namespace std;

enum Permission {a = 1, b = 2, c = 4};

string getPermission(Permission);

auto main() -> int{
    int user[10] = {2,3,4,5,7,1,0,3,5,2};
    for(auto i=0;i<=10;i++)
    {
        cout << "co robisz?! jako numerek: " << i << " to robisz!: " << getPermission(Permission(user[i])) << '\n';
    }
return 0;
}
    string getPermission(Permission z){
    switch(z)
    {
        case a: 
        return "jesz";
        break;

        case b: 
        return "pijesz";
        break;

        case a | b: 
        return "jesz + pijes";

        case c:
        return "tanczysz";
        break;

        case  c | a:
        return "jesz + tanczysz";
        break;

        case c | b: 
        return "pijesz + tanczycz";
        break;

        case c | b | a: 
        return "jesz + pijesz + tanczysz";
        break;

        default:        
        return "zrob cos";
        break;
    }
}
