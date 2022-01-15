#include <iostream>

using namespace std;

enum SPORT {bieganie = 1, jezdziectwo, kolarstwo, plywanie, box, narciarstwo, lyzwiarstwo, koszykowka};

auto main() -> int{

int triathlon = 7;


switch(triathlon)
{
    case bieganie | kolarstwo | plywanie:
        cout << "*** T R I A T H L O N ***" << '\n';
    break;
}


return 0;

}
