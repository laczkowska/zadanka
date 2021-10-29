#include <iostream>

using namespace std;

auto main () -> int{
int a,b,s;

cout <<"podaj a: ";
cin >>a;

cout <<"podaj b: ";
cin >>b;

cout <<"podaj s: ";
cin >>s;

if (s==0){
	cout<< "zle c rowne 0" << "\n";
}
else{


	do{
		cout<<a<<'\n';
		a++;
		
		
	}while(a<b);

}

}
