#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;

    while(t--)
    {
        int c, p;
        double g;
        cin>>c>>p;
        if(c > 1000)
        {
            g = (c*p) *0.9;
        }
        else
        {
            g = c*p;
        }
        cout<<fixed<<setprecision(6)<<g<<endl;
    }
    return 0;
}