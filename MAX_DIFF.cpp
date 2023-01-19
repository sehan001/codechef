#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int N,S;
	    cin>>N>>S;
	    int diff;
	    if(S<=N)
	    {
	        diff=S;
	    }
	    else
	    {
            diff=(N-S)+N;
	    }
	    cout<<diff<<"\n";
	}
	return 0;
}
