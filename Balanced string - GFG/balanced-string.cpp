//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
  
    int sumofdig(int n){
        int ans = 0;
        while(n>0){
            int rem = n%10;
            ans+=rem;
            n/=10;
        }
        return ans;
    }
  
    string BalancedString(int N) {
        // code here
        string total_alphabets = "abcdefghijklmnopqrstuvwxyz";
        string ans;
        int rem = N%26;
        int quo = N/26;
        while(quo--){ans+=total_alphabets;}
        if(N % 2 == 0){
            for(int i = 0; i<rem/2; i++){ans+=total_alphabets[i];}
            for(int i = rem/2; i>=0; i--){ans+=total_alphabets[26-i];}
            return ans;
        }
        int sum = sumofdig(N);
        if(sum%2 == 0){
            for(int i = 0; i<(rem+1)/2; i++){ans+=total_alphabets[i];}
            for(int i = (rem-1)/2; i>=0; i--){ans+=total_alphabets[26-i];}
            return ans;
        }
        for(int i = 0; i<(rem-1)/2; i++){ans+=total_alphabets[i];}
        for(int i = (rem+1)/2; i>=0; i--){ans+=total_alphabets[26-i];}
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends