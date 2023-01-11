//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int m = array1.size();
        int n = array2.size();
        int size = m+n;
        // Your code goes here
        
        vector<int> v;
        int i = 0, j = 0;
        for(; i<array1.size() && j<array2.size(); ){
            if(array1[i]<=array2[j]){
                v.push_back(array1[i]);
                i++;
            }
            else{
                v.push_back(array2[j]);
                j++;
            }
        }
        while(i<m){
            v.push_back(array1[i]);
            i++;
        }
        while(j<n){
            v.push_back(array2[j]);
            j++;
        }
        if(size % 2 != 0){
            return v[size/2];
        }
        double ans =  (v[size/2]+v[size/2-1])/2.0;
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends