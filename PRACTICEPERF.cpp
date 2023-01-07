#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    int i,c=0;
    for(i=0;i<=3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=3;i++)
    {
        if(a[i]>=10)
        {
            c=c+1;
        }
    }
    cout<<c;
    return 0;
}
