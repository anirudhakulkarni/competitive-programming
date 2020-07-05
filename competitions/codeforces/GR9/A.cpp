
// C++ implementation of the approach 
#include <iostream> 
using namespace std; 
  
// Function that returns true if num is 
// greater than both arr[i] and arr[j] 
static bool isPeak(long long arr[], long long n, long long num, 
                   long long i, long long j) 
{ 
  
    // If num is smaller than the element 
    // on the left (if exists) 
    if (i >= 0 && arr[i] > num) 
        return false; 
  
    // If num is smaller than the element 
    // on the right (if exists) 
    if (j < n && arr[j] > num) 
        return false; 
    return true; 
} 
  
// Function that returns true if num is 
// smaller than both arr[i] and arr[j] 
static bool isTrough(long long arr[], long long n, long long num, 
                     long long i, long long j) 
{ 
  
    // If num is greater than the element 
    // on the left (if exists) 
    if (i >= 0 && arr[i] < num) 
        return false; 
  
    // If num is greater than the element 
    // on the right (if exists) 
    if (j < n && arr[j] < num) 
        return false; 
    return true; 
} 
  
void printPeaksTroughs(long long arr[], long long n) 
{ 
    cout << "Peaks : "; 
  
    // For every element 
    for (long long i = 0; i < n; i++) { 
  
        // If the current element is a peak 
        if (isPeak(arr, n, arr[i], i - 1, i + 1)) 
            cout << arr[i] << " "; 
    } 
    cout << endl; 
  
    cout << "Troughs : "; 
  
    // For every element 
    for (long long i = 0; i < n; i++) { 
  
        // If the current element is a trough 
        if (isTrough(arr, n, arr[i], i - 1, i + 1)) 
            cout << arr[i] << " "; 
    } 
} 
  
// Driver code 
int main() 
{ 
	long long n;
    long long arr[n]; 
     cin>>n;
     for (long long i = 0; i < n; ++i)
     {
     	/* code */cin>>arr[i];
     }
  
    printPeaksTroughs(arr, n); 
  
    return 0; 
} 