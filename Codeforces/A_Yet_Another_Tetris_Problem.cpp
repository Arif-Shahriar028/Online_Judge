#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, j, n, count {0};
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		count = 0;
		for(i=0; i<n; i++)
			cin>>a[i];
		
		for(i=1; i<n; i++)
		{
			if(abs(a[i]-a[i-1])% 2 != 0)
			{
				count = 1;
				break;
			}
		}
		
		if(n==1 || count==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

}