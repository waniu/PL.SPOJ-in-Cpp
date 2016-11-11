#include <iostream>

using namespace std;

int test;
int a,b;
int cukierki;


int main()
{
    cin>>test;
    
    for(int i=0; i<test; i++)
    {
        cin>>a>>b;
        cukierki=1;
        
        while(cukierki%a!=0 || cukierki%b!=0)
        {
            cukierki++;
        }
        
        cout<<cukierki<<endl;
    }
    return 0;
}
