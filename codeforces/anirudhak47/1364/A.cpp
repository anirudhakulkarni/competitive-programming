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


int longSubarrWthSumDivByK(vector<long long int> arr,  
                          long long int n,long long int k) 
{ 
    // unodered map 'um' implemented as 
    // hash table 
    unordered_map<int, int> um; 
      
    // 'mod_arr[i]' stores (sum[0..i] % k) 
    int mod_arr[n], max = 0; 
    int curr_sum = 0; 
      
    // traverse arr[] and build up the 
    // array 'mod_arr[]' 
    for (int i = 0; i < n; i++) 
    { 
        curr_sum += arr[i]; 
          
        // as the sum can be negative, taking modulo twice 
        mod_arr[i] = ((curr_sum % k) + k) % k;         
    }     
      
    for (int i = 0; i < n; i++) 
    { 
        // if true then sum(0..i) is divisible 
        // by k 
        if (mod_arr[i] == 0) 
            // update 'max' 
            max = i + 1; 
          
        // if value 'mod_arr[i]' not present in 'um' 
        // then store it in 'um' with index of its 
        // first occurrence         
        else if (um.find(mod_arr[i]) == um.end()) 
            um[mod_arr[i]] = i; 
              
        else
            // if true, then update 'max' 
            if (max < (i - um[mod_arr[i]])) 
                max = i - um[mod_arr[i]];             
    } 
      
    // required length of longest subarray with 
    // sum divisible by 'k' 
    return max; 
}                           
  

int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2); 
} 
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    ll t;
    cin >> t;
    while(t--)
    {
    	
        int n,x,sum=0,sume,sumb,sum1,nn,flag=0;
        cin>>n>>x;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
       	if (sum%x!=0){
       		cout<<n<<endl;
       		continue;
       	}
       	int left=-1,right=-1;
       	for(int i=0; i<n; i++)
        {
            if (a[i]%x!=0){
            	left=i;
            	break;
            }
        }
        for(int i=n-1; i>=0; i--)
        {
            if (a[i]%x!=0){
            	right=i;
            	break;
            }
        }
        if(left!=-1 || right!=-1){
        	cout<<n-min(left,n-right-1)-1<<endl;
        }
        
        else{
        	cout<<-1<<endl;
        }

       	
    }
    return 0;
}