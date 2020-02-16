// https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof/
class CQueue {
public:
    stack<int> s1;
    stack<int> s2;
    CQueue() {}

    void appendTail(int value) {
        while(!s2.empty()){
            int cur = s2.top(); s2.pop();
            s1.push(cur);
        }
        s1.push(value);
        while(!s1.empty()){
            int cur = s1.top(); s1.pop();
            s2.push(cur);
        }
    }
    
    int deleteHead() {
        if(s2.empty()) return -1;
        int ret = s2.top(); s2.pop();
        return ret;
    }
};