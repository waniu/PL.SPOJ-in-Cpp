#include <iostream>

using namespace std;

double a, b, c;
int answer;
int rejestr[10];

int main()
{
    while(cin>>a>>b>>c)
    {
        for(int i=0; i<10; i++)
        
        
        if(a<=0 || b<=0 ||c<=0)
        {
            answer = 0;
        }
        else if (a+b<=c || a+c<=b || b+c<= a)
        {
            answer = 0;
        }
        else
        {
            answer = 1;
        }
    
        cout<<answer<<endl;
    }
    
    return 0;
}
