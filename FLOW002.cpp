#include <bits/stdc++.h>
using namespace std;

int main(int aegc, char *argv[])
{
    int t, a, b, div;

    cin>>t;
    
    while(t--)
    {
        cin>>a>>b;
        if( a >= 1 && a <= 10000 && b  >= 1 && b <= 10000)
        {
            div = a % b;
            cout<<div<<"\n";
        }
    }
    return 0;
}