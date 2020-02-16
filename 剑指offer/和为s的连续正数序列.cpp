// https://leetcode-cn.com/problems/he-wei-sde-lian-xu-zheng-shu-xu-lie-lcof/
class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ret;
        for(int i=1; i<=target/2; i++){
            vector<int> cur;
            int sum = 0;
            for(int j=i; j<target; j++){
                sum += j;
                cur.push_back(j);
                if(sum > target) break;
                if(sum == target){
                    ret.push_back(cur);
                    break;
                }
            }
        }
        return ret;
    }
};