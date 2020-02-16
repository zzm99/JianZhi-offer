// https://leetcode-cn.com/problems/zi-fu-chuan-de-pai-lie-lcof/
class Solution {
public:
    set<string> st;
    void dfs(string& s, int cur){
        if(cur >= s.length()) st.insert(s);
        for(int i=cur; i<s.length(); i++){
            sort(s.begin()+cur, s.end());
            swap(s[i], s[cur]);
            dfs(s, cur+1);
            swap(s[i], s[cur]);
        }
    }
    vector<string> permutation(string s) {
        dfs(s, 0);
        vector<string> ret(st.begin(), st.end());
        return ret;
    }
};