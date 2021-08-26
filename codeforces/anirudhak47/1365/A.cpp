#include <bits/stdc++.h>
#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define PI 3.14159265359
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define endl "\n"
using namespace std;

long long int mod=1000000007;

int main()
{
    fio;
	ll t;
	cin >> t;
    while(t--)
    {
         int m,n,k,c=0,r=0;
        cin>>m>>n;
        int row[m]= {0},col[n]= {0};
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>k;
                if(k)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0; i<m; i++)
            if(row[i]==0)
                r++;
        for(int j=0; j<n; j++)
            if(col[j]==0)
                c++;
        if(c>r)
            if(r%2)
                cout<<"Ashish"<<endl;
            else
                cout<<"Vivek"<<endl;
        else
            if(c%2)
                cout<<"Ashish"<<endl;
            else
                cout<<"Vivek"<<endl;

        
//        printvector(arr);
//        sort(arr.begin(),arr.end());



    }
    return 0;
}