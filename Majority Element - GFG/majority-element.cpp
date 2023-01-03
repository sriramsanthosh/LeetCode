//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        int ele = -1;
        int maxi = INT_MIN;
        unordered_map<int, int> m;
        for(int i = 0; i<size; i++){
            m[a[i]]++;
            if(m[a[i]]>size/2){
                if(m[a[i]]==maxi && a[i]>ele){
                    ele = a[i];
                }
                if(m[a[i]]>maxi){
                    ele = a[i];
                    maxi = m[a[i]];
                }
            }
        }
        return ele;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends