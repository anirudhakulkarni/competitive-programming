#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int a;
		int sum = 0;
		char s[11];
		cin>>a>>s;
		for(int i=0;i<a;i++)
		{
			char b[16];
			cin>>b;
			if(b[8] == 'W')
			{ 
			    int r;
			    cin>>r;
				sum += 320 - (r<20?r:20);
			}
			else if(b[8] == 'R')
			{
				sum += 300;
			}
			else if(b[8] == 'H')
			{
				sum += 50;
			}
			else
			{
				int l;
				cin>>l;
				if(l>=50 && l<=1000)
				{
					sum += l;
				}
			}
		} 
		if(s[0] == 'I')
		{
			cout<<sum/200<<endl;
		}
		else
		{
			cout<<sum/400<<endl;
		}
	}
}