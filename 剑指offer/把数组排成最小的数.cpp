// https://leetcode-cn.com/problems/ba-shu-zu-pai-cheng-zui-xiao-de-shu-lcof/
class Solution {
public:
    static bool cmp(int& a, int& b){
        string sa = to_string(a), sb = to_string(b);
        return sa + sb < sb + sa;
    }
    string minNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
        string ret = "";
        for(auto& i: nums) ret += to_string(i);
        return ret;
    }
};