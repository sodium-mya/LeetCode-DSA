class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;

        for (i; i>=0; i--){
            if (nums[i+1]>nums[i]) {
                break;
            }
        }
        if (i>-1){
        for (int j=n-1; j>i; j--){
            if (nums[j]>nums[i]) {
                swap(nums[j], nums[i]);
                break;
            }
        }
        }
        i++;
        int k=n-1;
        while (k>i){
            swap(nums[k], nums[i]);
            k--;
            i++;
        }
    }
};