#include <iostream>

using namespace std;

int t, ilosc_liczb, liczba, suma;

int main()
{
    cin>>t; //Ilosc testow
    
    for(int i=0; i<t; i++)
    {
        suma=0;
        cin>>ilosc_liczb;
        for(int j=0; j<ilosc_liczb; j++)
        {
            cin>>liczba;
            suma+=liczba;
        }
        
        cout<<suma<<endl;
        
    }
    
    
    return 0;
}
