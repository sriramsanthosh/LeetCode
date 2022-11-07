class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        bool flag = false;
        for(int i = 0; i<s.size(); i++){
            if(flag == false && s[i] == '6'){
                flag = true;
                s[i] = '9';
            }
        }
        int ans = stoi(s);
        return ans;
    }
    
};