#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(int argc, char*argv[])
{
    int x;
    float y, t;
    cin>>x>>y;
    if( x % 5 == 0 && y >= x + 0.50)
    {
        t = (y - x)-0.50;
        cout<<fixed<<setprecision(2)<<t<<endl;
    }
    else
    {
        cout << fixed << setprecision(2)<<y<< endl;
    }
    return 0;
}