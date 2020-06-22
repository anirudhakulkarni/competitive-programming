#include <bits/stdc++.h> 
#define MAX 1000
using namespace std; 
  
// Function to print Excel column name for a given column number 
void printString(long long int n) 
{ 
    char str[MAX]; // To store result (Excel column name) 
    int i = 0; // To store current index in str which is result 
  
    while (n > 0) { 
        // Find remainder 
        int rem = n % 26; 
  
        // If remainder is 0, then a 'Z' must be there in output 
        if (rem == 0) { 
            str[i++] = 'z'; 
            n = (n / 26) - 1; 
        } 
        else // If remainder is non-zero 
        { 
            str[i++] = (rem - 1) + 'a'; 
            n = n / 26; 
        } 
    } 
    str[i] = '\0'; 
  
    // Reverse the string and print result 
    reverse(str, str + strlen(str)); 
    cout << str << endl; 
  
    return; 
} 
  
// Driver program to test above function 
int main() 
{ 
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("E:/codes/testcases/input.in", "r", stdin);
    // for writing output to output.txt
    freopen("E:/codes/testcases/output.in", "w", stdout);
    #endif
    long long int a,b,x,n,m,k,sum=0,ans=0,res=0;
    cin >> n;
    
    printString(n);
    return 0;
}
