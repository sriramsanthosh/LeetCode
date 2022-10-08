class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 1){
        return 1;
    }
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int maxi = 0, count = 0;
    for(int i = 1; i<n; i++){
        if(nums[i-1] - nums[i]==-1 ){
            if(count == 0){
                count+=2;
            }
            else 
                count++;
        }
        else if(nums[i-1] == nums[i]){
            if(count == 0){
                count++;
            }
        }
        else{
            count = 0;
        }
        maxi = max(maxi, count);
    }
    maxi = max(count, maxi);
        return maxi;
    }
};