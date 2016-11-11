#include <iostream>

using namespace std;

int test;
int ile_liczb=0;
int liczba;

int main()
{
    cin>>test;
    
    for (int i=0; i<test; i++)
    {
        cin>>ile_liczb;
        
        int tablica[ile_liczb];
        
        for(int j=0; j<ile_liczb; j++)
        {
            cin>>liczba;
            tablica[j]=liczba;
        }
        
        for(int k=0; k<ile_liczb; k++)
        {
            if(k%2==0&&k!=ile_liczb-1)
            {
                cout<<tablica[k+1]<<" ";
            }
        }
        
        cout<<tablica[0]<<" ";
        
        for(int k=0; k<ile_liczb; k++)
        {
            if(k%2==0&&k)
            {
                cout<<tablica[k]<<" ";
            }
        }
        
        cout<<endl;
    }
    return 0;
}
