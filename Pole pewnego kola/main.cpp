#include <iostream>
#include <math.h>

using namespace std;

double r,d;
double pi = 3.141592654;
double cieciwa;


double pole_kola;

int main()
{
    cin>>r>>d;
    
    double h = r-d/2;
    
    cieciwa = 2.0*pow((2*h*r-h*h), 0.5);
    
    pole_kola = pi*pow((cieciwa/2.0), 2.0);
    
    cout<<pole_kola<<endl;
    
    return 0;
}
