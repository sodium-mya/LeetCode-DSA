class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int l=0, r=0;
        while (r<n){
            if (nums[r]!=0) {
                nums[l]=nums[r];
                l++;
            }
            r++;
        }
        while (l<n){
            nums[l]=0;
            l++;
        }
    }
};