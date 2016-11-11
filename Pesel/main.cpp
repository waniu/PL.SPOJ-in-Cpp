#include <iostream>

using namespace std;

int test;

string pesel;
int suma;
char poprawny;


int main()
{
    cin>>test;
    
    for(int i=0; i<test; i++)
    {
        cin>>pesel;
        
        suma = pesel[0]*1 + pesel[1]*3 + pesel[2]*7 + pesel[3]*9 + pesel[4]*1
             + pesel[5]*3 + pesel[6]*7 + pesel[7]*9 + pesel[8]*1 + pesel[9]*3 + pesel[10]*1;
        
        
        cout<<suma<<endl;
        
        if(suma%10==0)
        {
            poprawny = 'D';
        }
        else
        {
            poprawny = 'N';
        }
        
        cout<<poprawny<<endl;
    }
    
    return 0;
}
