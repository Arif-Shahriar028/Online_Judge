#include<iostream>
using namespace std;

int main()
{
	int t , i, j, n, count {0};
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
	    count = 0;
		for(i=0; i<n; i++)
		{
			cin>>a[i];
		}
		
		for(i=0; i<n; i++)
		{
			for(j=n-1; j>i+1; j--)
			{
				if(a[i]==a[j])
				{
					count = 1;
					break;
				}
			}
		}
		
		if(count == 1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}