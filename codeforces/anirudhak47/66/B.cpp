#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; 
typedef vector< vi > vvi; 
/////////////////////////
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define loop(i,a,b) for (int i = a; i < b; i++)
//////////////////////////
#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<'\n'
#define PI_val 3.14159265359
#define printpair(n) cout<<n.F<<" "<<n.S
#define printvop(n) loop(i,0,n.size()-1){printpair(n[i])<<endl;}
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
long long int mod=1000000007;
//////////////////////////
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    long long int a,b,x,n,sum=0,ans=0;
    cin >> n;

    vector<int> arr(n);
            loop(i,0,n)
            {
                cin>>arr[i];
            }
            vector<int> arrsol(n);
            loop(i,0,n){
            	long long int res=0;
            	int temp=arr[i];
            	loop(j,i,n){
            		if(temp>=arr[j]){
            			res++;
            			temp=arr[j];
            		}
            		else{
            			break;
            		}

            	}
            	temp=arr[i];
            	for(int j=i-1;j>=0;j--){
            		
            		if(temp>=arr[j]){
            			res++;

            			temp=arr[j];
            		}
            		else{
            			break;
            		}
            	}

            	arrsol[i]=res;


            }
            cout<<*max_element(arrsol.begin(), arrsol.end())<<endl;
    //       printvector(arr);
    //        sort(arr.begin(),arr.end());
    
    
    return 0;
}