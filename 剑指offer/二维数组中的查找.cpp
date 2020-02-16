// https://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof/
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0) return false;
        int n = matrix.size();
        if(matrix[0].size() == 0) return false;
        int m = matrix[0].size();
        int small = matrix[0][0], large = matrix[n-1][m-1];
        int i = 0, j = m-1;
        while(i < n && j >= 0){
            if(matrix[i][j] == target) return true;
            if(matrix[i][j] > target) j--;
            else i++;
        }
        return false;
    }
};