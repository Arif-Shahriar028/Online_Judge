#include<bits/stdc++.h>
using namespace std;

long long int total(long long int n,long long int k)
{
	int x = n;
		   
		   if(n<k)
			   return x;
		   
			x = x + total(n/k, k);
}

int main()
{
	long long int n, k, i, j, x;
	while(~(scanf("%lld %lld", &n, &k)) != EOF)
	{
		/*x = n;
		while(n>=k)
		{
			x = x+(n/k);
			n = n/k;
		}*/
		x = total(n, k);
		
		cout<<x<<endl;
	}
	
	return 0;
}