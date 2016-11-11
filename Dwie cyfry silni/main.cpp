#include <iostream>

using namespace std;

int test, liczba;

int silnia(int l)
{
    if(l==0) return 1;
    else return l*silnia(l-1);
}

int main()
{
    cin>>test;
    
    for(int i=0; i<test; i++)
    {
        cin>>liczba;
        
        if(liczba<10)
        {
            cout<<(silnia(liczba)%100-silnia(liczba)%10)/10<<" "<<silnia(liczba)%10<<endl;
        }
        else
        {
            cout<<0<<" "<<0<<endl;
        }
    }
    
    
    return 0;
}
