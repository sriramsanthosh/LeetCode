//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    map<char, int> m;
    for(int i = 0; i<s.size(); i++){
        string t;
        t+=s[i];
        m[s[i]]++;
        if(m[s[i]]>1){
            return t;
        }
    }
    return "-1";
}