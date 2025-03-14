#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        int e[n];
        bool flag = true;
        for(int i = 0; i<n; ++i)
        {
            e[i] = d[i];
        }
        sort(d, d + n);

        for(int i = 0; i<n; ++i)
        {
            if(e[i] != d[i])
            {
                flag = false;
            }
        }
        if(flag)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

}