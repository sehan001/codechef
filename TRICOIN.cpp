#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int count=0;
        for(int i=1;i<=n;i++)
        {
            count=count+1;
            n=n-i;
        }
        cout<<count<<"\n";
    }
    return 0;
}
