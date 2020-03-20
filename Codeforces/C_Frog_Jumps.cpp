#include<iostream>
using namespace std;

int main()
{
	int t, i, j, k;
	string s;
	cin>>t;
	
	while(t--)
	{
		cin>>s;
		int count = 0, max=0;
		int l = s.size();
		
		for(i=0; i<l; i++)
		{
			if(s[i] == 'R')
				count =0;
			else{
				count ++;
				if(count >max)
					max = count;
			}
		}
		
		cout<<max+1<<endl;
	}
}