class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v(nums.size());
        for(int i = 0, j= 0; i<nums.size(); i+=2, j++){
            v[i] = nums[j];
            v[i+1] = nums[n+j];
        }
        return v;
    }
};