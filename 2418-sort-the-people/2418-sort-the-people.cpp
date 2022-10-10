class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        multimap<int, string, greater<int>> m;
        for(int i = 0; i<names.size(); i++){
            m.insert({heights[i], names[i]});
        }
        int i = 0;
        for(auto it = m.begin(); it!=m.end(); it++, i++){
            names[i] = it->second;
        }
        return names;
    }
};