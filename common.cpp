// First element just greater than given number in sorted array
// similar is lower_bound when just less than given number asked
vector<int> arr(n);
int ans=upper_bound(arr.begin(),arr.end(),target)-arr.begin();

int arr[]
ans= upper_bound(arr, arr+n, tofind) - arr;

// sum of digits in a number
int n;
int ans=0;
while(n>0){
	ans+=n%10;
	n/=10;
}

// It returns (x^y) % p
int largestPower(int n, int p)
{
    int x = 0;
    while (n) {
        n /= p;
        x += n;
    }
    return x;
// Utility function to do modular exponentiation.
int power(int x, int y, int p)
{
    int res = 1; // Initialize result
    x = x % p; // Update x if it is more than or
    // equal to p
    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;
 
        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
// Returns n! % p
int modFact(int n, int p)
{
    if (n >= p)
        return 0;
 
    int res = 1;
 
    // Use Sieve of Eratosthenes to find all primes
    // smaller than n
    bool isPrime[n + 1];
    memset(isPrime, 1, sizeof(isPrime));
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = 2 * i; j <= n; j += i)
                isPrime[j] = 0;
        }
    }
 
    // Consider all primes found by Sieve
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            // Find the largest power of prime 'i' that divides n
            int k = largestPower(n, i);
 
            // Multiply result with (i^k) % p
            res = (res * power(i, k, p)) % p;
        }
    }
    return res;
}