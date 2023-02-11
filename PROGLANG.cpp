#include <iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int a,b,a1,b1,a2,b2;
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    if((a1==a || b1==a) & (a1==b || b1==b))
	    {
	        cout<<"1";
	    }
	    else if((a2==a || b2==a) & (a2==b || b2==b))
	    {
	        cout<<"2";
	    }
	    else
	    {
	        cout<<"0";
	    }
	    cout<<"\n";
	}
	return 0;
}
