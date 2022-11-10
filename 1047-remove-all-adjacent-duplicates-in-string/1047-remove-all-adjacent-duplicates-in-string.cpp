class Solution {
public:
    string removeDuplicates(string s) {
        if(s.size() == 1){
            return s;
        }
        stack<char> st;
        st.push(s[0]);
        string ans;
        for(int i = 1; i<s.size(); i++){
            if(st.empty() == true || st.top() != s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }
        while(st.empty() == false){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};