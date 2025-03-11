#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    int n1, n2;
    cin>>n1>>n2;

    if(n1 > n2)
    {
        cout<<n1 - n2<<endl;
    }
    else
    {
        cout<<n1 + n2<<endl;
    }
    return 0;
}