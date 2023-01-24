//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    // code here
	    map<int, int> m;
	    priority_queue<int> q;
	    for(int i = 0; i<n; i++){
	        m[arr[i]]++;
	        q.push(arr[i]);
	    }
	    int t = n-1;
	    while(!q.empty()){
	        int top = q.top();
	        q.pop();
	        m[top] = t;
	        t--;
	    }
	    for(int i = 0; i<n; i++){
	        arr[i] = m[arr[i]];
	    }
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends