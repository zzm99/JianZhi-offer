// https://leetcode-cn.com/problems/gou-jian-cheng-ji-shu-zu-lcof/submissions/
class Solution {
public:
    vector<int> constructArr(vector<int>& a) {
        vector<int> ret;
        if(a.size() == 0) return ret;
        int cur = 1;
        for(int i=0; i<a.size(); i++){
            if(i == 0){
                ret.push_back(cur);
                cur *= a[i];
                continue;
            }
            ret.push_back(cur);
            cur *= a[i];
        }
        cur = 1;
        for(int i=a.size()-1; i>=0; i--){
            if(i == a.size()-1){
                cur *= a[i];
                continue;
            }
            ret[i] *= cur;
            cur *= a[i];
        }
        return ret;
    }
};