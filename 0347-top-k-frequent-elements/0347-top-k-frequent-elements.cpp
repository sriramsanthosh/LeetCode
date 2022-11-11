class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        vector<pair<int, int>> v;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(auto it = m.begin(); it!=m.end(); it++){
            v.push_back(make_pair(it->second, it->first));
        }
        sort(v.begin(), v.end());
        vector<int> ans;
        int i = v.size()-1;
        while(k--){
            ans.push_back(v[i].second);
            i--;
        }
        return ans;
    }
};