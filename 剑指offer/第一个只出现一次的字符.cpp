// https://leetcode-cn.com/problems/di-yi-ge-zhi-chu-xian-yi-ci-de-zi-fu-lcof/submissions/
class Solution {
public:
    char firstUniqChar(string s) {
        map<char, int> mp;
        for(auto c: s){
            if(mp[c]) mp[c]++;
            else mp[c] = 1;
        }
        for(auto c: s){
            if(mp[c] == 1) return c;
        }
        return ' ';
    }
};