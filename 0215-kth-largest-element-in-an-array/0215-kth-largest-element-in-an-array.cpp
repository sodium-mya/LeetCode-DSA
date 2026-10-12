class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.rbegin(),nums.rend());
        int n=nums.size();
        if (n==1 || k==1) return nums[0];
        return nums[k-1];
    }
};