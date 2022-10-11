class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> m;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int count = 0;
        int i= 0;
        for(auto it = m.begin(); it!=m.end(); it++){
            if(it->second>=2){
                count+=2;
                nums[i] = it->first;
                i++;
                nums[i] = it->first;
                i++;
            }
            else if(it->second == 1){
                count++;
                nums[i] = it->first;
                i++;
            }
        }
        return count;
    }
};