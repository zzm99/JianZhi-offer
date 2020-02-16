// https://leetcode-cn.com/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof/
class Solution {
public:
    int minArray(vector<int>& numbers) {
        for(int i=0; i<numbers.size()-1; i++){
            if(numbers[i] > numbers[i+1]) return numbers[i+1];
        }
        return numbers[0];
    }
};