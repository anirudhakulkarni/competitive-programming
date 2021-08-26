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
// int multiply(int xxx, int res[], int res_size);
// auto factorial(int n) 
// { 
//     int res[500]; 
//     res[0] = 1; 
//     int res_size = 1; 
//     for (int xxx=2; xxx<=n; xxx++) 
//         res_size = multiply(x, res, res_size); 
  
//     long long int xx=0;
//     for (int i=res_size-1; i>=0; i--) 
//         {xx*=10;
//         xx+=res[i];}
//     return xx;
// } 

// /* Iterative Function to calculate (x^y)%p in O(log y) */
// long int power(int x, unsigned int y, int p)  
// {  
//     int res = 1; 
//     x = x % p; 
//     if (x == 0) return 0; 
//     while (y > 0){if (y & 1) res = (res*x) % p;y = y>>1;x = (x*x) % p;} return res;  
// }  
// ////////////power ends here///////





struct Point { 
        int x, y; 
    }; 


int overlappingArea(Point l1, Point r1, 
                        Point l2, Point r2) 
    { 
        // Area of 1st Rectangle 
        int area1 = abs(l1.x - r1.x) * 
                    abs(l1.y - r1.y); 
      
        // Area of 2nd Rectangle 
        int area2 = abs(l2.x - r2.x) * 
                    abs(l2.y - r2.y); 
      
        // Length of intersecting part i.e  
        // start from max(l1.x, l2.x) of  
        // x-coordinate and end at min(r1.x, 
        // r2.x) x-coordinate by subtracting  
        // start from end we get required  
        // lengths 
        int areaI = (min(r1.x, r2.x) -  
                     max(l1.x, l2.x)) *  
                    (min(r1.y, r2.y) - 
                     max(l1.y, l2.y)); 
      
        return (area1 + area2 - areaI); 
    } 
      
int inse(Point l1, Point r1, 
                        Point l2, Point r2){
                            
                            int areaI = (min(r1.x, r2.x) -  
                     max(l1.x, l2.x)) *  
                    (min(r1.y, r2.y) - 
                     max(l1.y, l2.y)); 
      
        return (areaI); 
                            
                            
                            
                            
                        }







int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	long int t;
	cin >> t;
    while(t--)
	{
    
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2;
        cin>>x3>>y3>>x4>>y4;
        Point l1 = { x1, y1 }, r1 = { x2, y2 }; 
        Point l2 = { x3, y3 }, r2 = { x4, y4 }; 


        if (inse(l1, r1, l2, r2)>0){
            cout<<"War Between Rohan and Mohan.";
        }
        else{
            cout<<"No War Between Rohan and Mohan.":
        }
        cout << overlappingArea(l1, r1, l2, r2); 
    } 
    
    
    
    
    
    
    
    
    
    
    
	
    return 0;
}