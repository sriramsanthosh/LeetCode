//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int z = 0, o=0, t=0;
        for(int i = 0; i<n; i++){
            if(a[i] == 0){
                z++;
            }
            if(a[i] == 1){
                o++;
            }
            if(a[i] == 2){
                t++;
            }
        }
        // vector<int> v;
        int i = 0;
        while(z--){
            a[i] = 0;
            i++;
        }
        while(o--){
            a[i] = 1;
            i++;
        }
        while(t--){
            a[i] = 2;
            i++;
        }
        // return v;
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends