// https://leetcode-cn.com/problems/yuan-quan-zhong-zui-hou-sheng-xia-de-shu-zi-lcof/
class Solution {
public:
    int lastRemaining(int n, int m) {
        int last = 0;
        for(int i=2; i<=n; i++)
            last = (last + m) % i;
        return last;
    }
};