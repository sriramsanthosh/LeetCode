class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int low = prices[0];
        int sum = 0;
        for(int i = 0; i<prices.size(); i++){
            ans = max(ans, prices[i]-low);
            if(prices[i]<low){
                low = prices[i];
            }
        }
        return ans;
    }
};