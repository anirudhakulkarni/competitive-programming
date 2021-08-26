#import<bits/stdc++.h>
using namespace std;
long long i,k,l,m,n,r,u[100005],v[100005];
main()
{
	for(cin>>n;i++<n;v[i]=u[i])cin>>u[i];
	sort(u,u+n+1);
	for(i=0;i++<n;)u[i]+=u[i-1],v[i]+=v[i-1];
	for(cin>>m;m--;)
	{
		cin>>k>>l>>r;
		cout<<(k%2?v[r]-v[l-1]:u[r]-u[l-1])<<endl;
	}
}