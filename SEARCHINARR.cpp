#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, x;
    cin>>n>>x;
    
    int a[n];
    for(int i = 0; i<n; ++i)
    {
        cin>>a[i];
    }

    bool s = false;
    for(int i =0; i<n; ++i)
    {
        if(a[i] == x)
        {
            cout<<"YES"<<endl;
            s = true;
            break;
        }
    }

    if(!s) //se convierte en true y imprimira NO
    {
        cout<<"NO"<<endl;
    }
    return 0;
}