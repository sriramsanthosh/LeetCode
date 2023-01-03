//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        map<char, char> m;
        m['{'] = '}';
        m['['] = ']';
        m['('] = ')';
        
        for(int i = 0; i<x.size(); i++){
            if(x[i] == '{' || x[i] == '[' || x[i] == '('){
                s.push(x[i]);
            }
            else{
                if(s.empty()){
                    return false;
                }
                char top = s.top();
                if(m[top] == x[i]){
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(!s.empty()){return false;}
        return true;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends