#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, p, s;
    cin>>t;

    while(t--)
    {
        cin>>n;
        p = n%10; //si el numero es 12345, estrega el 5, es decir el ultimo digito
        int c = 0;
        while( n != 0)
        {
            c = n % 10;
            n = n / 10;
        }// con el mismo numero, entrega 1, es decir el primer digito
        s = p + c;
        cout<<s<<endl;
    }
    return 0;
}