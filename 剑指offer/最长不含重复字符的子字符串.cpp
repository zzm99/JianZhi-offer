// https://leetcode-cn.com/problems/zui-chang-bu-han-zhong-fu-zi-fu-de-zi-zi-fu-chuan-lcof/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int allmax = 0;
        for(int i=0; i<s.size(); i++){
            map<char, int> mp;
            int curmax = 0;
            for(int j=i; j<s.size(); j++){
                if(mp[s[j]]) break;
                mp[s[j]]++;
                curmax++;
            }
            allmax = max(allmax, curmax);
        }
        return allmax;
    }
};