//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        queue<int> pos;
        queue<int> neg;
        
        for(int i = 0; i<n; i++){
            if(arr[i]<0){
                neg.push(arr[i]);
            }
            else{
                pos.push(arr[i]);
            }
        }
        
        int i = 0;
        while(!pos.empty()){
            arr[i] = pos.front();
            i++;
            pos.pop();
        }
        while(!neg.empty()){
            arr[i] = neg.front();
            i++;
            neg.pop();
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends