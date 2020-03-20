#include<iostream>
using namespace std;

int main()
{
	int n, i, j, count {0};
	cin>>n;
	int a[n], b[n];
	
	for(i=0; i<n; i++)
	    cin>>a[i];
	
	for(i=0; i<n; i++)
		cin>>b[i];
	
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if((a[i]+a[j])>(b[i]+b[j]))
				count ++;
		}
	}
	
	
	cout<<count<<endl;
	count = 0;
}