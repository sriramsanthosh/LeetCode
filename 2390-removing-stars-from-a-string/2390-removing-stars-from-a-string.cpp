class Solution {
public:
    string removeStars(string s) {
    stack<char> st;
        for(int i = 0; i<s.size(); i++){
            if(st.empty() == false && s[i]=='*'){
                st.pop();
            }
            else if(s[i] == '*'){
                continue;
            }
            else{
                st.push(s[i]);
            }
        }
        string ans;
        while(st.empty() == false){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};