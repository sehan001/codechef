#include <iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int n,a,b,c;
	    cin>>n>>a>>b>>c;
	    if(b>=n && n<=(a+c))
	    {
	        cout<<"YES";
	    }
	    else
	    {
	        cout<<"NO";
	    }
	    cout<<"\n";
	}
	return 0;
}
