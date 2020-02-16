// https://leetcode-cn.com/problems/fan-zhuan-dan-ci-shun-xu-lcof/
class Solution {
public:
    string reverseWords(string s) {
        stringstream myin;
        myin << s;
        string cur = "";
        stack<string> st;
        while(myin >> cur){
            st.push(cur);
        }
        string ret = "";
        while(!st.empty()){
            ret += st.top() + " ";
            st.pop();
        }
        ret.pop_back();
        return ret;
    }
};