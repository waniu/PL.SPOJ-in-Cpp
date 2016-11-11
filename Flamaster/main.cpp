#include <iostream>

using namespace std;
int t;
string tekst;
int main()
{
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> tekst;
        int x = tekst.length();
        for(int j=0; j<x; j++)
        {
            if(tekst[j]=='*')
            {
                continue;
            }
            else if(tekst[j+2]==tekst[j])
            {
                int ile=1;
                for(int w=j+1; w<x; w++)
                {
                    if(tekst[w]==tekst[j])
                    {
                        ile++;
                        tekst[w]='*';
                    }
                    else break;
                }
                
                if(ile>1)
                {
                    cout << tekst[j] << ile;
                }
                else
                {
                    cout << tekst[j];
                }
            }
            else cout << tekst[j];
        }
        cout << endl;
    }
    return 0;
}
