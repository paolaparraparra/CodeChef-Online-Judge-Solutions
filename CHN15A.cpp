#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int f = 0;
        while(n--)
        {
            int p;
            cin>>p;
            if((p+k)%7 == 0)
            {
                f++;
            }
        }
        cout<<f<<endl;
    }
    return 0;
}