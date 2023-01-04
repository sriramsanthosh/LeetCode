//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool valid(string s)
{
    // code here
    unordered_map<char, char> check;
    check['{'] = '}';
    check['['] = ']';
    check['('] = ')';
    stack<int> st;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            st.push(s[i]);
        }
        else{
            if(st.empty()){return false;}
            char t = st.top();
            if(s[i] != check[t]){
                return false;
            }
            st.pop();
        }
    }
    if(!st.empty()){return false;}
    return true;
}