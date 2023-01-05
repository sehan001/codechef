#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,c=0;
        cin>>a;
        while(a>0)
        {
            if(a%10==4)
            {
                c=c+1;
            }
                a=a/10;
        }
        cout<<c<<"\n";
        
    }
    return 0;
}
