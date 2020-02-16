// https://leetcode-cn.com/problems/da-yin-cong-1dao-zui-da-de-nwei-shu-lcof/submissions/
class Solution {
public:
    vector<int> printNumbers(int n) {
        int all = 1;
        for(int i=0; i<n; i++) all*=10;
        vector<int> ret;
        for(int i=1; i<all; i++) ret.push_back(i);
        return ret;
    }
};