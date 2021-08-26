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
    long long int a,b,x,n,m,k,sum=0,ans=0,res=0;
    string s1,s2,s3;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    pair<int,char> p1,p2,p3;
    p1=make_pair(0,'A');
    p2=make_pair(0,'B');
    p3=make_pair(0,'C');
    vector<pair<int,char>> arr;
    arr.PB(p1);
    arr.PB(p2);
    arr.PB(p3);
    if(s1[1]=='>'){
    	arr[s1[0]-'A'].F++;
    }    
    else{
    	arr[s1[2]-'A'].F++;
    }
    if(s3[1]=='>'){
    	arr[s3[0]-'A'].F++;
    }    
    else{
    	arr[s3[2]-'A'].F++;
    }
    if(s2[1]=='>'){
    	arr[s2[0]-'A'].F++;
    }    
    else{
    	arr[s2[2]-'A'].F++;
    }
    if(arr[0].S==arr[1].F || arr[0].F==arr[2].F || arr[1].F==arr[2].F ){
    	cout<<"Impossible";
    }
    else{
    	sort(arr.rbegin(),arr.rend());
    	cout<<arr[2].S<<arr[1].S<<arr[0].S;
    }

    return 0;
}