#include <iostream>
auto main () -> int
{
std::cout << "Hello,  World !" << "\n " ;

auto value = std :: string {};
std :: getline ( std :: cin , value );
return std :: stoi ( value );
}

