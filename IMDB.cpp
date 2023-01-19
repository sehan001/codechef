#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,N;
	cin>>T;
	while(T--)
	{
	    int N,X,ans=0;
	    cin>>N>>X;
	    for(int i=1;i<=N;i++)
	    {
	        int si,ri;
	        cin>>si>>ri;
	        if(si<=X)
	        {
	            ans=max(ans,ri);
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
