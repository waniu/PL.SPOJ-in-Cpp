#include <iostream>

using namespace std;

int test;
int s;
int x;
int n;

int main()
{
    cin>>test;
    
    for (int i=0; i<test; i++)
    {
        cin>>s;
        n=0;
        x=s;
        
        
        while (x!=1)
        {
            
            if(x%2!=0)
            {
                x=3*x+1;
            }
            else
            {
                x=x/2;
            }
            
            n++;
        }
        
        cout<<n<<endl;
    }
    
    return 0;
}
