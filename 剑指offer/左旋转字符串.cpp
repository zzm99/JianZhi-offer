// https://leetcode-cn.com/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof/submissions/
class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string cur = s.substr(0, n);
        string cur2 = s.substr(n);
        return cur2 + cur;
    }
};