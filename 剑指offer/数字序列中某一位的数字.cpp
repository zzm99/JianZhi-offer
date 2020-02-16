// https://leetcode-cn.com/problems/shu-zi-xu-lie-zhong-mou-yi-wei-de-shu-zi-lcof/
class Solution {
public:
    int findNthDigit(int n) {
        n--;
        for(long long i=1; i<=11; i++){
            long long first = pow(10, i-1);
            if(n < 9*first*i){
                return to_string(first+n/i)[n%i]-'0';
            }
            n -= 9*first*i;
        }
        return 0;
    }
};