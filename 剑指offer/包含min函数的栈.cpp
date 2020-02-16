// https://leetcode-cn.com/problems/bao-han-minhan-shu-de-zhan-lcof/
class MinStack {
public:
    stack<int> st;
    stack<int> minst;

    MinStack() {}

    void push(int x) {
        if(minst.empty() || x <= minst.top()) minst.push(x);
        st.push(x);
    }
    void pop() {
        if(st.empty()) return;
        int t = st.top();
        if(t == minst.top()) minst.pop();
        st.pop();
    }
    
    int top() {
        if(st.empty()) return -1;
        return st.top();
    }
    
    int min() {
        if(minst.empty()) return -1;
        return minst.top();
    }
};
