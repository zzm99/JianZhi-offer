// https://leetcode-cn.com/problems/shu-zu-zhong-shu-zi-chu-xian-de-ci-shu-ii-lcof/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mp;
        for(auto& i: nums) mp[i]++;
        for(auto i=mp.begin(); i!=mp.end(); i++)
            if(i->second == 1) return i->first;
        return -1;
    }
};