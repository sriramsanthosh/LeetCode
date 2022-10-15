class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> m;
        vector<int> v;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        
        for(auto it = m.begin(); it!=m.end(); it++){
            if(it->second > (nums.size())/3 ){
                v.push_back(it->first);
            }
        }
        return v;
    }
};