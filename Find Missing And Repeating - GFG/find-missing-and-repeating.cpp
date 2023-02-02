//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *A, int n) {
        // code here
        
            vector<bool> vis(n);
    int rep = -1;
    int mis = -1;
    for(int i = 0; i<n; i++){
        if(vis[A[i]-1] == false){
            vis[A[i]-1] = true;
        }
        else{
            rep = A[i];
            // break;
        }
    }
    for(int i = 0; i<vis.size(); i++){
        if(vis[i] == false){
            mis = i+1;
            // break;
        }
    }
    // vector<int> ans;
    int * ans = new int[2];
    ans[0] = rep;
    ans[1] = mis;
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends