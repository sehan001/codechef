#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int a;
	    cin>>a;
	    if(a>=1 && a<100)
	    {
	        cout<<"Easy";
	    }
	    else if(a>=100 && a<200)
	    {
	        cout<<"Medium";
	    }
	    else
	    {
	        cout<<"Hard";
	    }
        cout<<"\n";
	}
	return 0;
}
