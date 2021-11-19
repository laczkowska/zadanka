#include <iostream>

using namespace std;

int main ()

{

	   int n, i; 
       int wartosc, start;
	   start = 0;
	   i=0;
	   
	   int tab[100];
	   
        cout<<"wprowadz zakres tablicy: " << '\n';
        cin>>n;
    
    while(n>100 || n<0)
        {
            cout<< "zle liczba mniejsza od 0 lub wieksza od 100, po za zakresem " <<'\n';
            cin>>n;
        }

        cout<<"wprowadz szukana wartosc: "<<'\n';
        cin>>wartosc;
    
  
        
       for(int i=0; i<n; i++)
        {

            tab[i]=start;         
            start++;
        }
	
	while (tab[i] !=wartosc)	
	{
		i++;
		if(i>=n){break;} 			
	}
	
	if (i==n)			
	{
	    cout<<"-1\n";
	}
	else
	{
	    cout<< "tablica zawiera podana wartosc "<< '\n';		
	}
return 0;
}
