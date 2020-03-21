#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, i, j, count {0}, cnt {0};
	while(1)
	{
		cin>>n;
		if(n==0)
			break;
		
		vector<int>v;
		count =0;
		cnt = 0;
		
		while(n !=0)
		{
			j = n%2;
			v.push_back(j);
			if(j==1)
				count++;
			
			n = (n-j)/2;
			cnt++;
		}
		
		cout<<"The parity of ";
		for(i=cnt-1; i>=0; i--)
		{
			cout<<v[i];
		}
		
		cout<<" is "<<count<<" "<<"(mod 2)."<<endl;
	}
}