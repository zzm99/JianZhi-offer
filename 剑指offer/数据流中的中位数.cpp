// https://leetcode-cn.com/problems/shu-ju-liu-zhong-de-zhong-wei-shu-lcof/
class MedianFinder {
public:
    priority_queue<int, vector<int>, less<int>> mMax;
    priority_queue<int, vector<int>, greater<int>> mMin;
    MedianFinder() {}
    
    void addNum(int num) {
        int sum = mMax.size() + mMin.size();
        if(sum & 1){
            if(!mMin.empty() && num > mMin.top()){
                int temp = mMin.top();
                mMin.pop();
                mMin.push(num);
                num = temp;
            }
            mMax.push(num);
        }else{
            if(!mMax.empty() && num < mMax.top()){
                int temp = mMax.top();
                mMax.pop();
                mMax.push(num);
                num = temp;
            }
            mMin.push(num);
        }
    }
    
    double findMedian() {
        int sum = mMax.size() + mMin.size();
        if(sum & 1) return (double)(mMin.top());
        else return (double)(mMax.top() + mMin.top())/2;
    }
};