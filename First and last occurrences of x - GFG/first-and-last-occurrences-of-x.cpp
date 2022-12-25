//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int mini = -1;
    int maxi = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] == x){
            if(mini == -1){mini = i;}
            maxi = max(i, maxi);
        }
    }
    vector<int> v(2);
    v[0] = mini;
    v[1] = maxi;
    return v;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends