class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for(int i = 0, j = 1; j<nums.size(); ){
            if(nums[i] == nums[j]){
                j++;
            }
            else{
                i++;
                k++;
                nums[i] = nums[j];
                j++;
            }
            
        }
        return k;
    }
};