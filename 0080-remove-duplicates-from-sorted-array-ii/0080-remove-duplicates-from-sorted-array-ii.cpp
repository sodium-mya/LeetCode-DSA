class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int n = nums.size();
        if (n==1) return 1;
        int i=1;
        while (i<n){
            if (nums[i]==nums[i-1]) count++;
            else count = 1;
            if (count>2) {
                nums.erase(nums.begin()+i);
                i--;
                n--;
            }
            i++;
        }
        return n;
    }
};