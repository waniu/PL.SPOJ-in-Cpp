#include <iostream>

using namespace std;

int ile_liczb;
int przesuniecie;
int liczba;

int main()
{
    
    cin>>ile_liczb>>przesuniecie;
    
    int tablica[ile_liczb];
    
    for(int i=0; i<ile_liczb; i++)
    {
        cin>>liczba;
        tablica[i] = liczba;
    }

    for(int j=przesuniecie; j<ile_liczb; j++)
    {
        cout<<tablica[j]<<" ";
    }
    
    for(int k=0; k<przesuniecie; k++)
    {
        cout<<tablica[k]<<" ";
    }
    
    return 0;
}
