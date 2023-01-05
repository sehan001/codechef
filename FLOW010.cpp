#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char a;
        cin>>a;
        if(a==98|| a==66)
        {
            cout<<"BattleShip";
        }
        else if(a==99|| a==67)
        {
            cout<<"Cruiser";
        }
        else if(a==100|| a==68)
        {
            cout<<"Destroyer";
        }
        else
        {
            cout<<"Frigate";
        }
        cout<<"\n";
    }
    return 0;
}
