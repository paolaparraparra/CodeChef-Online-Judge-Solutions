#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //ordenar los elementos de forma descendente para tener siempre la suma mayor al inicio
        sort(a, a + n, greater<int>());

        for(int j = 0; j<n; ++j)
        {
            if(a[j] != a[j+1])
            {
                cout<<a[j] + a[j+1]<<endl;
                break;
            }
        }
    }
}