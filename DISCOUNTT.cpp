#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int suma = 0;
        for(int i = 0; i<n; ++i)
        {
            suma += a[i];
        }
        int suma2 = 0;
        for(int i = 0; i<n; ++i)
        {
            if( a[i] <= y)
            {
                a[i] = 0;
            }
            else
            {
                a[i] = a[i] - y;
            }
            suma2 += a[i];
        }
       
        if((suma2 + x) < suma)
        {
            cout<<"COUPON"<<endl;
        }
        else
        {
            cout<<"NO COUPON"<<endl;
        }
    }

}