class Solution {
public:
    string frequencySort(string s) {
        map<char, int> m;
        for(int i = 0; i<s.size(); i++){
            m[s[i]]++;
        }
        vector<pair<int, char>> se;
        for(auto it = m.begin(); it!=m.end(); it++){
            se.push_back(make_pair(it->second, it->first));
        }
        sort(se.begin(), se.end());
        string ans;
        for(int i = se.size()-1; i>=0; i--){
            for(int j = 0; j<se[i].first; j++){
                ans+=se[i].second;
            }
        }
        return ans;
    }
};