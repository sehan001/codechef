#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int a;
	    cin>>a;
	    if(a%10==0)
	    {
	        cout<<a/2;
	    }
	    else
	    {
	        cout<<(a/2)+1;
	    }
	    cout<<"\n";
	}
	return 0;
}
