#include <iostream>

using namespace std;

double A,B,C;
double delta;

int main()
{
    while (cin>>A>>B>>C)
    {
        delta = B*B-4*A*C;
        
        if(delta>0)
        {
            cout<<"2"<<endl;
        }
        else if (delta==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
