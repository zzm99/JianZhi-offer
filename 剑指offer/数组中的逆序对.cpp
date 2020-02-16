// https://leetcode-cn.com/problems/shu-zu-zhong-de-ni-xu-dui-lcof/
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        return mergesort(nums, 0, nums.size()-1);
    }
    int mergesort(vector<int>& nums, int L, int R){
        if(L == R) return 0;
        int mid = (L+R)/2;
        return mergesort(nums, L, mid)+mergesort(nums, mid+1, R)+merge(nums,L,mid,R);
    }
    int merge(vector<int>& nums, int L, int mid, int R){
        int ret = 0;
        vector<int> help(R-L+1, 0);
        int p1 = L, p2 = mid+1, i = 0;
        while(p1 <= mid && p2 <= R){
            ret += nums[p1] > nums[p2] ? (mid+1-p1):0;
            help[i++] = nums[p1] > nums[p2] ? nums[p2++]:nums[p1++]; 
        }
        while(p1 <= mid) help[i++] = nums[p1++];
        while(p2 <= R) help[i++] = nums[p2++];
        for(int i=0; i<R-L+1; i++) nums[L+i] = help[i];
        return ret;
    }
};