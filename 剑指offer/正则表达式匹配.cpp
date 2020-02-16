// https://leetcode-cn.com/problems/zheng-ze-biao-da-shi-pi-pei-lcof/
class Solution {
public:
    bool helper(string& s, int a, string& p, int b){
        if(a == s.size() && b == p.size()) return true;
        if(a > s.size() || b > p.size()) return false;
        if(b < p.size()-1 && p[b+1] == '*')
            return helper(s, a, p, b+2) || ((p[b]=='.'||s[a]==p[b])&&helper(s, a+1, p, b));
        if(p[b] == '.' || s[a] == p[b])
            return helper(s, a+1, p, b+1);
        return false;
    }
    bool isMatch(string s, string p) {
        return helper(s, 0, p, 0);
    }
};