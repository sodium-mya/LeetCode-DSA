class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> copy(nums);
        k=k%n;
        for (int i=0; i<k; i++){
            nums[i]=copy[n-k+i];
        }
        for (int i=k; i<n; i++){
            nums[i]=copy[i-k];
        }        
    }
};