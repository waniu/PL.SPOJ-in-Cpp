#include <iostream>

using namespace std;

int m; //Liczba wierszy
int n; //Liczba kolumn
int liczba; //Do uzupełniania tablicy


int main()
{
    cin>>m>>n;
    
    int tablica[m][n]; //Macierz przed transponowaniem
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>liczba;
            
            tablica[i][j] = liczba;
            
        }
    }
    
   int tablica_T[n][m]; //Macierz po transponowaniu
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            
            tablica_T[j][i] = tablica[i][j];
            
        }
    }

    cout<<endl;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<tablica_T[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
