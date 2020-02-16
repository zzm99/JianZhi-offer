// https://leetcode-cn.com/problems/shun-shi-zhen-da-yin-ju-zhen-lcof/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ret;
        if(matrix.empty()) return ret;
        int rl = 0, rh = matrix.size()-1;
        int cl = 0, ch = matrix[0].size()-1;
        while(true){
            for(int i=cl; i<=ch; i++) ret.push_back(matrix[rl][i]);
            if(++rl > rh) break;
            for(int i=rl; i<=rh; i++) ret.push_back(matrix[i][ch]);
            if(--ch < cl) break;
            for(int i=ch; i>=cl; i--) ret.push_back(matrix[rh][i]);
            if(--rh < rl) break;
            for(int i=rh; i>=rl; i--) ret.push_back(matrix[i][cl]);
            if(++cl > ch) break;
        }
        return ret;
    }
};