// https://leetcode-cn.com/problems/zui-xiao-de-kge-shu-lcof/
class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        if(k == 0) return {};
        priority_queue<int, vector<int>> a;
        for(int i=0; i<k; i++) a.push(arr[i]);
        for(int i=k; i<arr.size(); i++){
            if(arr[i] < a.top()){
                a.pop(); a.push(arr[i]);
            }
        }
        vector<int> ret;
        while(!a.empty()){
            ret.push_back(a.top());
            a.pop();
        }
        return ret;
    }
};