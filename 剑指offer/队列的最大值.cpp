// https://leetcode-cn.com/problems/dui-lie-de-zui-da-zhi-lcof/
class MaxQueue {
public:
    queue<int> q;
    deque<int> maxq;

    MaxQueue() {
        
    }
    
    int max_value() {
        if(maxq.empty()) return -1;
        return maxq.front();    
    }
    
    void push_back(int value) {
        q.push(value);
        while(!maxq.empty() && value > maxq.back()) maxq.pop_back();
        maxq.push_back(value);
    }
    
    int pop_front() {
        if(q.empty()) return -1;
        if(q.front() == maxq.front()) maxq.pop_front();
        int ret = q.front(); q.pop();
        return ret;
    }
};