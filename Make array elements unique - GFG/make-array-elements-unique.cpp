//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    #define ll long long int
  
    long long int minIncrements(vector<int> arr, int N) {
        // Code here
        ll count = 0;
        map<int, ll> m;
        for(int i = 0; i<N; i++){
            m[arr[i]]++;
            
        }
        for(auto it = m.begin(); it!=m.end(); ){
            ll temp = it->second;
            ll t = it->first;
            if(temp==1){
                it++;
                continue;
            }
            while(m[t]>0){
                t++;
                count++;
            }
            m[t]++;
            m[it->first]--;
        }
        return count;        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minIncrements(arr, N) << endl;
    }
}
// } Driver Code Ends