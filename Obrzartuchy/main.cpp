#include <iostream>

using namespace std;

int test;

int liczba_obrzartuchow;
int pudelko;
int doba=24*60*60;
int ciastka;


int main()
{
    cin>>test;
    
    for(int i=0; i<test; i++)
    {
        ciastka = 0;
        cin>>liczba_obrzartuchow>>pudelko;
        
        int tablica_czasow[liczba_obrzartuchow];
        int tablica_ciastek[liczba_obrzartuchow];
        
        for(int j=0; j<liczba_obrzartuchow; j++)
        {
            cin>>tablica_czasow[j];
            tablica_ciastek[j]=doba/tablica_czasow[j];
            ciastka += tablica_ciastek[j];
        }
        
        if(ciastka%pudelko!=0)
        {
            cout<<ciastka/pudelko+1<<endl;
        }
        else
        {
            cout<<ciastka/pudelko<<endl;
        }
    }
    
    return 0;
}
