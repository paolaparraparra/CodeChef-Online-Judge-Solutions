#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    int n, t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int c = 0;
        string m;
        while(n != 0)
        {
            c = n % 10;
            m += to_string(c);
            n = n / 10;
        }
        while (m.size() > 1 && m[0] == '0') {
            m.erase(0, 1);  //borrar el cero
        }
        cout<<m;
        cout<<endl;
    }
    return 0;
}