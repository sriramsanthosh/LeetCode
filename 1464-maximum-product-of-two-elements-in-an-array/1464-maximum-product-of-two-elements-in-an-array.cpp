class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 2){
            return (nums[0]-1)*(nums[1]-1);
        }
        int a = nums[0];
        int b = INT_MIN;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]>a){
                b = max(a, b);
                a = nums[i];
            }
            else if(nums[i]>b){
                b = nums[i];
            }
        }
        return (a-1)*(b-1);
    }
};