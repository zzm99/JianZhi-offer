// https://leetcode-cn.com/problems/ba-zi-fu-chuan-zhuan-huan-cheng-zheng-shu-lcof/
class Solution {
public:
    int strToInt(string str) {
        if(str.empty()) return 0;
        int i=0;
        while(str[i] == ' ') ++i;
        int sign=1, base=0;
        if(i < str.size() && (str[i] == '-' || str[i] == '+'))
            sign = str[i++] == '-' ? -1 : 1;
        while(i < str.size()){
            if(str[i] >= '0' && str[i] <= '9'){
                if(base > INT_MAX/10 || (base == INT_MAX/10 && str[i]>'7'))
                    return sign == 1 ? INT_MAX : INT_MIN;
                base = base * 10 + (str[i++]-'0');
            }else{
                return base * sign;
            }
        }
        return base * sign;
    }
};