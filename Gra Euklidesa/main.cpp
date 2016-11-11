#include <iostream>

using namespace std;

int test;
int a, b;

int main()
{
    cin>>test;
    
    for(int i=0; i<test; i++)
    {
        cin>>a>>b;
        
        while (a!=b)
        {
            if(a>b)
            {
                a-=b;
            }
            else
            {
                b-=a;
            }
        }
        
        cout<<a+b<<endl;
    }
    
    return 0;
}
