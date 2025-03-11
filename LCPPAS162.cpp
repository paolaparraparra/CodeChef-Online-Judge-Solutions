#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int n;
    int c = 0, s = 1;
    cin>>n;
    int d = n;
    while(n != 0)
    {
        c += n % 10;
        n = n / 10;
        
    }
    //loop nuevo ya que el valor en n cambia
    while(d > 0)
    {
        s *= d % 10;
        d = d / 10;
    }
    cout<<c<<" "<<s<<endl;
    return 0;
}