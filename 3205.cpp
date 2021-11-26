#include <iostream>


using namespace std;

void quicksort(int tab[], int s, int k)

{

int pivot = tab[ (s+k)/2 ];          
int p=(s-1);                              
int q=(k+1); 

                                 
    do{

        while (tab [++p] < pivot);          

        while (tab [--q] > pivot); 

                        
        if (p<=q) 

        {
            swap(tab[p], tab[q]);                     
        }

    }while (p<=q);                                 


    if (s<q)
    {
        quicksort(tab, s, q);             
    }

    if (k>p)
    {
        quicksort(tab, p, k);         
    }

    else exit;
    }


int main()
{
    int tab[64];
        
        for(int i=0;i<64;i++)
        {
            tab[i] =  rand() % 64+1;           
                
        }


            cout<<"sortowanie zakonczone, wynik to: " << '\n';

            quicksort(tab ,0, 63);  

                  
        for(int i = 0; i < 64; i++)
        {
            cout << tab[i] << '\n';
        }



return 0;
}
