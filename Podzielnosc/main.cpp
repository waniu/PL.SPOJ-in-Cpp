#include <iostream>

using namespace std;

int test;
int n,x,y;

int main()
{
    cin>>test;
    
    for (int i=0; i<test; i++)
    {
        cin>>n>>x>>y;
        
        for(int j=1; j<n; j++)
        {
            if(j%x==0 && j%y!=0)
                cout<<j<<" ";
        }
        
        cout<<endl;
    }
    return 0;
}
