#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int n, c=1;
    cin>>n;

    do{
        c *=n;
        n--;
    }while(n > 0);
    cout<<c<<endl;
    return 0;
}