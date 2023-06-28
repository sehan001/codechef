#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=="START38")
            {
                sum1 = sum1 + 1;
            }
            else if(a[i]=="LTIME108")
            {
                sum2=sum2+1;
            }
        }
        cout<<sum1<<" "<<sum2;
        cout<<"\n";
    }
    return 0;
}
