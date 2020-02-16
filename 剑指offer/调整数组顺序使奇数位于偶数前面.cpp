// https://leetcode-cn.com/problems/diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof/
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        for(auto& n: nums){
            if(n % 2 == 0) even.push_back(n);
            else odd.push_back(n);
        }
        vector<int> ret;
        for(int i=0; i<odd.size(); i++) ret.push_back(odd[i]);
        for(int i=0; i<even.size(); i++) ret.push_back(even[i]);
        return ret;
    }
};