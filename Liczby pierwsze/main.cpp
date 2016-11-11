#include <iostream>
using namespace std;

int t,liczba,suma;

int main()
{
    cin>>t;
    
    for(int i=0; i<t; i++)
    {
        cin>>liczba;
        suma=0;
        
        for(int j=1; j<=liczba; j++)
        {
         if(liczba%j==0)
             suma++;
        }
    
        if(suma==2)
            cout<<"TAK"<<endl;
        else
            cout<<"NIE"<<endl;
    
    }
    
    return 0;
}
