class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> v(matrix.size(), vector<int> (matrix.size()));
        for(int i = 0, k = matrix.size()-1; i<matrix.size(); i++, k--){
            for(int j = 0, l = 0; j<matrix[i].size(); j++, l++){
                v[l][k] = matrix[i][j];
            }
        }
        matrix = v;
    }
};