#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,sum=0;
        cin>>a;
        while(a!=0)
        {
            int r=a%10;
            sum=sum+r;
            a=a/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}