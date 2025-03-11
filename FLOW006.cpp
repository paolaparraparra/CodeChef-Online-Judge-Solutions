#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int c = 0;
        while( n != 0)
        {
            c += n % 10;
            n = n / 10;
        }
        cout<<c<<endl;
    }
    return 0;
}