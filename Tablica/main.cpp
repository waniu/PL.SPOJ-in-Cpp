#include <iostream>

using namespace std;

int liczba;
int tablica [100];
int i=0;

int main()
{
    while(cin>>liczba)
    {
        tablica[i] = liczba;
        i++;
    }
    
    for(int j=i-1; j>=0; j--)
    {
        cout<<tablica[j]<<" ";
    }
    
    return 0;
}
