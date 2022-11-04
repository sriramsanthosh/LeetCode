class Solution {
public:
    string reverseVowels(string s) {
        stack<char> st;
        vector<int> v;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'a'-32 || s[i] == 'e'-32 || s[i] == 'i'-32 || s[i] == 'o'-32 || s[i] == 'u'-32){
                st.push(s[i]);
                v.push_back(i);
            }
        }
        for(int i = 0; i<v.size(); i++){
            s[v[i]] = st.top();
            st.pop();
        }
        return s;
    }
};

