#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; i++)
#define REPL(i,a,b) for (ll i = a; i < b; i++)

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;cin>>n;
	int arr[n*2];
    REP(i,0,2*n){
        cin>>arr[i];
    }
    int c=1;int cnt=0;int ans=0;int flag=1;int tot=0;int temp=0;int d=0;
    while(c){
        flag=1;tot=0;
        REP(j,0,2*n){
            if(arr[j]!=j+1){
                flag=0;
                tot++;
            }
        }
        if(flag==1){
            cout<<ans<<endl;
            break;
        }
        if(tot<2*n){
            cout<<-1<<endl;
            break;
        }
        cnt=0;
        REP(j,0,n){
            if(arr[j]<=n){
                cnt++;
            }
        }
        if(n%2==0){
            if(cnt==n/2){
                cout<<-1<<endl;
                break;
            }
            else if((cnt>n/2 && d!=1) || d==2){
                //do 1;
                temp=0;
                for(int e=0;e<2*n;e+=2){
                    temp=arr[e];
                    arr[e]=arr[e+1];
                    arr[e+1]=temp;
                    d=1;
                }
                ans++;
            }
            else{
                //do 2;
                temp=0;
                REP(m,0,n){
                    temp=arr[m];
                    arr[m]=arr[m+n];
                    arr[m+n]=temp;
                    d=2;
                }
                ans++;
            }
        }
        else{
            if((cnt>n/2 && d!=1) || d==2){
                //do 1;
                temp=0;
                for(int e=0;e<2*n;e+=2){
                    temp=arr[e];
                    arr[e]=arr[e+1];
                    arr[e+1]=temp;
                    d=1;
                }
                ans++;
            }
            else{
                //do 2;
                temp=0;
                REP(m,0,n){
                    temp=arr[m];
                    arr[m]=arr[m+n];
                    arr[m+n]=temp;
                    d=2;
                }
                ans++;
            }
            
        }
    }
}