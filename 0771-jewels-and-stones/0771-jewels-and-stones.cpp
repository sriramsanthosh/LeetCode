class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> m;
        for(int i = 0; i<stones.size(); i++){
            m[stones[i]]++;
        }
        int count = 0 ;
        for(auto i = 0; i<jewels.size(); i++){
            int temp = m[jewels[i]];
            if(temp >= 1){
                count+=temp;
            }
        }
        return count;
    }
};