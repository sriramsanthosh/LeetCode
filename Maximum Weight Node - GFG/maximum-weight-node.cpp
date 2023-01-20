//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      // code here
      unordered_map<int, int> m;
      int maxi = INT_MIN;
      int ans = 0;
      for(int i = 0; i<Edge.size(); i++){
          if(Edge[i] == -1){
              continue;
          }
          m[Edge[i]]+=i;
            if(maxi<m[Edge[i]]){
                maxi = m[Edge[i]];
                ans = Edge[i];
            }
            else if(maxi==m[Edge[i]]){
                maxi = m[Edge[i]];
                ans = max(Edge[i], ans);
            }
      }
      return ans;
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends