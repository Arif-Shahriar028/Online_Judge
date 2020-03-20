#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, t, j;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		set<int> a;
		
		for(i=0; i<n; i++)
		{
			cin>>j;
			a.insert(j);
		}
		
		int size = a.size();
		
		cout<<size<<endl;
	}
	
	return 0;
}