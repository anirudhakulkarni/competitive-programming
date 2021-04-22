#include<iostream>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n;cin>>n;
 int depth=0,pos,max=0,posi;
 int count=0,deptht=0;
 for(int i=1;i<=n;i++)
	{
	 int a;cin>>a;
	 count++;
	 if(a==1) deptht++;
	 else deptht--;
	 if(deptht==0) 
		{
		 if(count>max) {max=count;posi=i-max+1;}
		 count=0;
		}
	 if(deptht>depth) {depth=deptht;pos=i;}
	}
 cout<<depth<<" "<<pos<<" "<<max<<" "<<posi<<'\n';
}
