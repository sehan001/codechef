#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int D,L,R;
	    cin>>D>>L>>R;
	    if(D>=L && D<=R)
	    {
	        cout<<"Take second dose now";
	    }
	    else if(D>L && D>R)
	    {
	        cout<<"Too Late";
	    }
	    else if(D<L && D<R)
	    {
	        cout<<"Too Early";
	    }
	    cout<<"\n";
	}
	return 0;
}
