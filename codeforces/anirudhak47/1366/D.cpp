#include <bits/stdc++.h>
using namespace std;
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


vector<int> primeFactors(int n)  
{  
    // Print the number of 2s that divide n  
    vector<int> arrsol;
    if(n%2==0){
    	arrsol.PB(2);
    }
    while (n % 2 == 0)  
    {  
          
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        if(n%i==0){
    	arrsol.PB(i);}
        while (n % i == 0)  
        {  
              
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  
        arrsol.PB(n);  
    return arrsol;
}  
int main()
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif

        long long int n,sum=0;
        cin>>n;
        vector<int> arr(n);
        vector<int> arrfin1;
        vector<int> arrfin2;
        loop(i,0,n)
        {
            cin>>arr[i];
        	
        	
        	vector<int> arr3=primeFactors(arr[i]);
        	if(arr3.size()>1){
        		arrfin1.PB(arr3[arr3.size()-1]);
        		arrfin2.PB(arr3[0]);

        	}
        	else{
				arrfin1.PB(-1);
        		arrfin2.PB(-1);

        	}




        }
        printvector(arrfin1);
        printvector(arrfin2);
        
//       printvector(arr);
//        sort(arr.begin(),arr.end());


    
    return 0;
}