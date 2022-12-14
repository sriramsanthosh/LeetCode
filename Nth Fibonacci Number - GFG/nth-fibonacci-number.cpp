//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

#define mod 1000000007

class Solution {
  public:
    #define ll long long
    #define mod 1000000007
    
    long long int nthFibonacci(long long int n){
        // code here
        ll prev2 = 0;
        ll prev1 = 1;
        for(ll i = 2; i<=n; i++){
            ll curr = (prev1+prev2)%mod;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends