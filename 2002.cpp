#include <iostream>

using namespace std;

auto main () -> int{
int a,b,c;

cout <<"podaj a: ";
cin >>a;

cout <<"podaj b: ";
cin >>b;

cout <<"podaj c: ";
cin >>c;

if (c==0){
	cout<< "zle c rowne 0" << "\n";
}
else{
	do{
		if((a%c)==0){
			cout<<a<<'\n';
			
		}
		a++;
	}while(a<b);
}


return 0;
}


