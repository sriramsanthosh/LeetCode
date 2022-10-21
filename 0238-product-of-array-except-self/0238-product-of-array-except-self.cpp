class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        bool zero = false;
        bool secondzero = false;
        int product = 1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                if(zero == false)
                zero = true;
                else if(secondzero == false){
                    secondzero = true;
                }
            }
            else
                product*=nums[i];
        }
        vector<int> v;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]!=0){
                if(zero == false)
                v.push_back(product/nums[i]);
                else
                    v.push_back(0);
            }
            else if(zero == true){
                if(secondzero == false)
                    v.push_back(product);
                else
                    v.push_back(0);
            }
            
        }
        return v;
    }
};