//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      map<int, int> m;
      for(int i = 0; i<N; i++){
          m[arr[i]]++;
      }
      int maxi = INT_MIN;
      int len = 0;
      auto  it = m.begin();
      int prev = it->first;
      it++;
      len++;
      for(; it!=m.end(); it++){
          if(it->first-prev == 1){
              len++;
          }
          else{
              maxi = max(maxi, len);
              len = 1;
          }
          prev=it->first;
      }
      maxi = max(maxi, len);
      return maxi;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends