#include <iostream>

using namespace std;

int ile;
int liczba;
int test;

int main()
{
    cin>>test;
    
    for(int k=0; k<test; k++)
    {
        cin>>ile;
        int tablica[ile];
    
        for(int i=0; i<ile; i++)
        {
            cin>>liczba;
            tablica[i] = liczba;
        }
    
        for(int j=1; j<ile; j++)
        {
            cout<<tablica[j]<<" ";
        }
        cout<<tablica[0]<<endl;
    }
    return 0;
}
