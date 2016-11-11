#include <iostream>
#include <math.h>
#include <iomanip>
#include <ios>

using namespace std;

double A,B,C;
double X=0.00;

int main()
{
    cin>>A>>B>>C;
    
    if(A==0)
    {
        if(B==C)
            cout<<"NWR"<<endl;
        else
            cout<<"BR"<<endl;
    }
    else
    {
        X=(C-B)/A;
        
        if(fabs(X)<10)
        {
            cout<<setprecision(3);
            cout.setf( ios::showpoint );
            cout<<X<<endl;
        }
        else if(fabs(X)<100 && fabs(X)>=10)
        {
            cout<<setprecision(4);
            cout.setf( ios::showpoint );
            cout<<X<<endl;
        }
        else if(fabs(X)<1000 && fabs(X)>=100)
        {
            cout<<setprecision(5);
            cout.setf( ios::showpoint );
            cout<<X<<endl;
        }
        else
        {
            cout<<setprecision(6);
            cout.setf( ios::showpoint );
            cout<<X<<endl;
        }
    }
    return 0;
}
