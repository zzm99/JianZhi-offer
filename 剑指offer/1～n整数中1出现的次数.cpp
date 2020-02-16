// https://leetcode-cn.com/problems/1nzheng-shu-zhong-1chu-xian-de-ci-shu-lcof/
class Solution {
 public:
  int countDigitOne(int n) {
    if (n <= 0) { return 0; }
    if (n < 10) { return 1; }
    string strnum = to_string(n);

    int highNum = strnum[0] - '0';
    int size = strnum.size();
    int withoutHigh = n - highNum * pow(10, size - 1);

    int firstOneCount = highNum == 1 ? (withoutHigh + 1) : pow(10, size-1);
    int otherOneCount = highNum * (size - 1) * pow(10, size - 2);

    return firstOneCount + otherOneCount + countDigitOne(withoutHigh);
  }
};