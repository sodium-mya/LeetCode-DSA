class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int best=0;
        for (int i=0; i<n; i++) {
            if (i==0) {
                sum=nums[i];
                best=sum;
            }
            else sum=max(nums[i],sum+nums[i]);
            best=max(best,sum);
        }
        return best;
    }
};