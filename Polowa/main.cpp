#include <iostream>

using namespace std;

int test;
string slowo;

int main()
{
    cin>>test;
    
    for(int i=0; i<test; i++)
    {
        cin>>slowo;
        long int dlugosc_slowa = slowo.length();
        int j=0;
        
        while (j<dlugosc_slowa/2)
        {
            cout<<slowo[j];
            j++;
        }
        cout<<endl;
    }
    return 0;
}
