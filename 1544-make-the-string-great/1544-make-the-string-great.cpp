class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string ans;
        for(int i = 0;i<s.size(); i++){
            if(st.empty() == true){
                st.push(s[i]);
                // ans+=s[i];
            }
            else if(abs(st.top()-s[i]) == 32){
                st.pop();
            }
            else{
                st.push(s[i]);
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