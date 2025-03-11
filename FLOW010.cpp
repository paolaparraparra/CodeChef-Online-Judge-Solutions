#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char p;
        cin>>p;

        if(p == 'B' || p == 'b')
        {
            cout<<"BattleShip"<<endl;
        }
        else if(p == 'C' || p == 'c')
        {
            cout<<"Cruiser"<<endl;
        }
        else if(p == 'D' || p == 'd')
        {
            cout<<"Destroyer"<<endl;
        }
        else if(p == 'F' || p == 'f')
        {
            cout<<"Frigate"<<endl;
        }
    }
    return 0;
}
