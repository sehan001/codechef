#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a;
        cin>>a;
        int rem=a%10;
        while(a>9)
        {
            a=a/10;
        }
        cout<<a+rem<<"\n";
    }
    return 0;
}