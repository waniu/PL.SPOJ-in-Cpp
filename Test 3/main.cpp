#include <iostream>

using namespace std;

int number;
int flag=0;
int counter=0;

int main()
{
    while(cin>>number)
    {
        if(number==42 && flag==1)
        {
            ++counter;
        }
        
        if(number!=42)
        {
            flag = 1;
            cout<<number<<endl;
        }
        else
        {
            flag = 0;
            cout<<number<<endl;
        }
        
        if(counter==3)
            break;
        
    }
    
    return 0;
}
