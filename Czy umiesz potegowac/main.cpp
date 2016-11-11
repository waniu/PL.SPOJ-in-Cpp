#include <iostream>
#include <math.h>

using namespace std;

int test;
int A,B;
int wynik;

int main()
{
    cin>>test;

    for(int i=0; i<test; i++)
    {
        cin>>A>>B;
        
        if(B==0)
        {
            wynik = 1;
        }
        
        if(A%10==1)
        {
            wynik = 1;
        }
        else if(A%10==2)
        {
            switch (B%4)
            {
                case 1:
                    wynik = 2;
                    break;
                case 2:
                    wynik = 4;
                    break;
                case 3:
                    wynik = 8;
                    break;
                case 0:
                    wynik = 6;
                    break;
                    
                default:
                    break;
            }
        }
        else if(A%10==3)
        {
            switch (B%4)
            {
                case 1:
                    wynik = 3;
                    break;
                case 2:
                    wynik = 9;
                    break;
                case 3:
                    wynik = 7;
                    break;
                case 0:
                    wynik = 1;
                    break;
                    
                default:
                    break;
            }
        }
        else if(A%10==4)
        {
            switch (B%2)
            {
                case 1:
                    wynik = 4;
                    break;
                case 0:
                    wynik = 6;
                    break;
                    
                default:
                    break;
            }
        }
        else if(A%10==5)
        {
            wynik = 5;
        }
        else if(A%10==6)
        {
            wynik =6;
        }
        else if(A%10==7)
        {
            switch (B%4)
            {
                case 1:
                    wynik = 7;
                    break;
                case 2:
                    wynik = 9;
                    break;
                case 3:
                    wynik = 3;
                    break;
                case 0:
                    wynik = 1;
                    break;
                    
                default:
                    break;
            }
        }
        else if(A%10==8)
        {
            switch (B%4)
            {
                case 1:
                    wynik = 8;
                    break;
                case 2:
                    wynik = 4;
                    break;
                case 3:
                    wynik = 2;
                    break;
                case 0:
                    wynik = 6;
                    break;
                    
                default:
                    break;
            }
        }
        else if(A%10==9)
        {
            switch (B%2)
            {
                case 1:
                    wynik = 9;
                    break;
                case 0:
                    wynik = 1;
                    break;
                    
                default:
                    break;
            }
        }
        else if(A%10==0)
        {
            wynik = 0;
        }
        
        cout<<wynik<<endl;
    }
    
    return 0;
}
