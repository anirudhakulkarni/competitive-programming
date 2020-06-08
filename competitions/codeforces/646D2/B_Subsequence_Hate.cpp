#include <bits/stdc++.h>
#define printvector(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<endl;
#define printarry(n) for(int i=0;i<n.length();i++){cout<<n[i]<<" ";}cout<<endl;
#define printstack(n) for(int i=0;i<n.size();i++){cout<<n[i]<<" ";}cout<<endl;
#define inarray(n) int arr[n];for(int i=0;i<n;i++){cin>>n[i];}
using namespace std;
long long int mod=1000000007;
//vector<vector<int> > a( 1000 , vector<int> (1000,-1));  
 
  
// This function finds factorial of large numbers 
// and return them




int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	long int t;
	cin >> t;
    while(t--)
    {
        string s;
        cin>>s;
        int one=0,zero=0;
        for ( auto x:s){
            if(x=='0')zero++;
            else{one++;}
        }
    if(s.back()=='0'){reverse(s.begin(), s.end()); }
  
            int anso=0,anst=0;
            if(s[0]=='0'){anso+=zero-1;}
            else{
                anso+=zero;
            }
            if(s.back()=='1'){reverse(s.begin(), s.end()); }
            if(s[0]=='1'){anst+=one-1;}
            else{
                anst+=one;
            }
            cout<<min(anso,anst)<<endl;

        
    }
    return 0;
}